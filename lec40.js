//promise is object
const promise1=new Promise(function(resolve,reject){
    setTimeout(function(){
        console.log('async task completes');
        resolve()
    },1000)
});
//resolve is connected to then for connection we called resolve in function
promise1.then(function(){
    console.log("promise consumed");
    
})
new  Promise(function(resolve,reject){
    setTimeout(function(){
        console.log("Asynctask3");
        resolve();
    },1000)
}).then(function(){
    console.log("asynctask2 resolved");
    
})
const  promise2=new Promise(function(resolve,reject){
    setTimeout(function(){
        resolve({username:"chai",email:"@gmail.com"})//passing object
        
    },1000)
})
promise2.then(function(user){console.log(user);
})
const promise4=new Promise((resolve, reject) => {
    setTimeout(function(){
        let error=true;
        if(!error){
            resolve({username:"hitesh",password:"123"})
        }else{
            reject("ERROR:Something went wrong")
        }
    },1000)
})
//below we  will do chaining value written by  first then function used by next then function and same for catch also  
promise4.then((user)=>{
    console.log(user);
    return user.username
    
})
.then((username)=>{
    console.log(username);
    
})
.catch(function(error){
    console.log(error);
    
}).finally(()=>console.log("promise resolved or rejected") 
)
const promise5=new Promise((resolve, reject) => {
    setTimeout(function(){
        let error=true;
        if(!error){
            resolve({username:"javascript",password:"123"})
        }else{
            reject("ERROR:Js went wrong")
        }
    },1000)
})
// async waits work for happen if not done then it dont go ahead
async function consumepromise5(){
  try  {const response=await promise5;
    console.log(response);}
    catch(error){
       console.log(error);
       
    }
    
}
consumepromise5()
//async function getallusers(){
//     try {
//         const response=await fetch('https://jsonplaceholder.typicode.com/users')
//         const data= await response.json();//await because it takes time to convert data by json
//         console.log(data);
        
//     } catch (error) {
//         console.log("E: error");
        
//     }
// }
//getallusers()
 fetch('https://jsonplaceholder.typicode.com/users')
 .then((datas)=>{ return datas.json()} )  .then((data)=>{
    console.log(data);   
 }).catch((error)=>console.log(error)
 )

