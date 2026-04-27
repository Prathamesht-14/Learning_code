import express from 'express';
const app=express();

// app.get('/',(req,res)=>{
//     res.send("Server is ready");
// })

const port=process.env.PORT||3000;

app.get('/api/jokes',(req,res)=>{
     const jokes=[
        {
            id:1,
            title:'A joke',
            content :"Nice joke"
        },
        {
            id:2,
            title:'A joke',
            content :"Nice joke"
        },
        {
            id:3,
            title:'A joke',
            content :"Nice joke"
        },
        {
            id:4,
            title:'A joke',
            content :"Nice joke"
        },
        {
            id:5,
            title:'A joke',
            content :"Nice joke"
        },
     ]
     res.send(jokes);

    })
app.listen(port,()=>{
    console.log('server at http://localhost:${port}');
    
})