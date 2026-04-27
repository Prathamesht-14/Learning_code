const express=require("express")
const {connectTOmongodb}=require('./connect')
const cookieparser=require("cookie-parser")
const path=require('path');
const URl=require('./models/url')
const app=express();
const PORT=8000
const staticRoute=require('./routes/staticRouter')
const urlRoute=require('./routes/url');
const userRoute=require('./routes/user')
const { allowedNodeEnvironmentFlags } = require("process");
const {checkforAuthentication,restrictTo}=require("./middleware/auth");

app.use(express.json());
app.use(express.urlencoded({extended:false}));//to parse form data
app.use(cookieparser());
app.use(checkforAuthentication)
app.use("/url",restrictTo(['Normal']),urlRoute);
app.use('/',staticRoute);
app.use('/user',userRoute);
app.get('/:shortId',async(req,res)=>{
    const shortId=req.params.shortId;
    const entry=await URl.findOneAndUpdate({
     shortId
    },{
        $push:{
            visitHistory:{timestamp :Date.now(),}
        }
    },{new:true})
    if (!entry) {
        return res.status(404).send("Short URL not found");
    }
    res.redirect(entry.redirectURL);
})

app.set("view engine","ejs");
app.set('views',path.resolve('./views'));



connectTOmongodb( "mongodb://127.0.0.1:27017/short-url").then(()=>{
    console.log("MOngodb connected");
    
})

 

app.listen(PORT,()=>console.log(`server started at port ${PORT}`)
)