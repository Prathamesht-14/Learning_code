function saymyname(){
    console.log("prathamesh")
}
//saymyname()
// function add(number1,number2){ //parameters
//     console.log(number1+number2)
// }
// const ans=add(7,8)//arguments
// console.log(ans)
// add(1,"a")
//in js undefined or empty string is false 
function add(number1,number2){ //parameters
    return(number1+number2)
}
const result=add(2,4)
console.log(result)
function loginusermessage(username){
    if(!username ){
        console.log("please enter valid username")
        return ""
    }
    return `${username} just logged in`
}
const str=loginusermessage()
console.log(str)