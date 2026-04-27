require("dotenv").config();
const express=require('express');
const path=require("path")
const mongoose=require("mongoose");

const cookieParser=require('cookie-parser');

const app=express();

const PORT=process.env.PORT||8000;

const userRoute=require('./routes/user');

const blogRoute=require('./routes/blog');

const Blog=require('./models/blog')
const { checkAuthenticationCookie } = require('./middleware/authentication');

mongoose.connect(process.env.MONGO_URL).then((e)=>console.log("mongodb connected")
)
app.set('view engine','ejs')
app.use(cookieParser());
app.use(express.urlencoded({extended:false}));
app.use(checkAuthenticationCookie("token"))
app.use('/public', express.static('public'));


app.use('/blog',blogRoute);
app.get("/",async(req,res)=>{
    const allBlogs=await Blog.find({}).sort("createdAt")
    res.render("Home", {
        user: req.user,
        blogs: allBlogs
    });
    
})


app.use('/user',userRoute);
app.listen(PORT,()=>console.log(`server started at port ${PORT}`)
)