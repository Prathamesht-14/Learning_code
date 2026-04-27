const fs=require("fs")
function logreqres(filename){
    return(log,req,next) =>{
        fs.appendFile(
            filename,
            `\n${Date.now()}:${req.id} ${req.method}:${req.path}\n0`,
            (err,data)=>{
next();
            }
        )
    }
}

module.exports={
    logreqres,
};