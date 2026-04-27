const express=require("express");

const {connectMongodb}=require('./connection')
const userRouter=require('./routes/user')
const app=express();
const PORT=3000;


connectMongodb('mongodb://127.0.0.1:27017/youtube-app-1').then(()=>
console.log("Mongodb connected")
);
const{logreqres}=require("./Middleware");


app.use(express.urlencoded({extended:false}));
app.use('/api/users',userRouter)
app.use(logreqres("index.txt"))

app.listen(PORT,() =>console.log(`server started at ${PORT}`)
 )
//install nodeman package to automatic server restart when change in code
