const fs=require("fs");

//sync call 
//fs.writeFileSync('./text.txt','Hey World')
//Async call
fs.writeFile('./text.txt','Hey World Async',(err)=>{})
const result=fs.readFileSync('./contacts.txt',"utf-8");//it return result 
//async expect callback it doesnt return value
console.log(result);
fs.readFile('./contacts.txt',"utf-8",(err,result) =>{
    if(err){
        console.log("Error",err);       
    }else{
        console.log(result);       
    }
});
fs.appendFileSync('./contacts.txt' ,`${Date.now()} Hey there`);
fs.cpSync('./contacts.txt','./copy.txt');
fs.unlinkSync('./copy.txt')
console.log((fs.statSync('./contacts.txt')));
//blocking req=synchronous it goes to thread pool // execution top to bottom
//non blocking =asynchronous  ese time lagta hai to tab tak niche ka task complete hota hai
// non blocking execution block nahi hoti
//Default threadd pool size=4


