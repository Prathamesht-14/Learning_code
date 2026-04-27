//var has global scope so avoid var and use let
// || means or
const useremail="gmail.com"
if(useremail){
    console.log("got user email")
}else{
    console.log("dont have email");
    
}
//falsey values: false,0,-0,0n,"",null,undefined,NaN
//truthy value "0",'false', " ",[],{},function(){}
const myobj={}
if(Object.keys(myobj).length===0){
    console.log("obj is empty")
}
//nulish coalescing operator(??)
let val1;
//val1=5??10
//val1=null??10
//val1=undefined ?? 12
val1=null ??10??20
console.log(val1)
//terniary operator
//condition ? true:false
const price=100
price>=100?console.log("price is equal or greater than 100"):console.log("price is less than 100")