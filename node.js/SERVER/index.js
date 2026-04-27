const http=require("http");
const fs=require("fs");
const url=require("url");
const myserver=http.createServer((req,res) =>{
    //console.log("New req received");
    //console.log(req);
    if(req.url==="/favicon.ico"){
        return res.end();
     }
     const myUrl=url.parse(req.url,true);
     console.log(myUrl);
     
    const log=`${Date.now()}: ${req.url} ${req.method} new req Received\n`;
    fs.appendFile('log.txt',log,(err,data)=>{
        
        switch(myUrl.pathname){
            case"/":
            res.end("Homepage");
            break;
            case"/about":
            const username=myUrl.query.name ;
            res.end(`Hi ${username}`);
            break;
            default:
            res.end("404 Not found") 
        }
       // res.end("Hello from server again");
    })
    
    
});
myserver.listen(8000,()=>console.log("Server started")
);
