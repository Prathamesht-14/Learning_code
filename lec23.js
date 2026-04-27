const user={
    username:"hitesh",
    price:999 ,
    welcomemessage:function(){
         console.log(`${this.username},welcome to website`)
         console.log(this)
    }

}
// user.welcomemessage()
// user.username="prathamesh"
 ///user.welcomemessage()
console.log(this)//current object empty when outside this refers empty object
// function chai(){
//     let username="hitesh"
//     console.log(this)
// }
// chai()
//arrow func
// const add2=(num1,num2)=>{
//     return num1+num2
// }
// swcond method for arrow func
// const add2=(num1,num2)=> (num1+num2)
const add2=(num1,num2)=> ({username:"hitesh"})
//returning an obj
console.log(add2(3,4))
const myarr=[1,2,3,4,5]