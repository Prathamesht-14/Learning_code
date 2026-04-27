// const tinderuser=new Object()
const tinderuser={}
tinderuser.id="123abc"
tinderuser.name="sammy"
tinderuser.istrue=false
//nested objects
const regularuse={
    email:"p@gmail.com",
    fullname:{
      username:{
        first:"prathamesh",
        last:"talekar"
      }
    }
}
console.log(regularuse.fullname.username)
const obj1={1:"a",2:"b",3:"c"}
const obj2={4:"d",5:"e",6:"f"}
const obj4={5:"g",6:"h"}

//const obj3=Object.assign(obj1,obj2,obj4)
//  good practice const obj3=Object.assign({},obj1,obj2) 
//console.log(obj3)
const obj3={...obj1,...obj2,...obj4}
const user=[{id:1,age:3},{id:2,age:4},{id:4,age:6}]//array of objects
console.log(user[1].age)
console.log(tinderuser)
console.log(Object.keys(tinderuser))
console.log(Object.values(tinderuser))
console.log(Object.entries(tinderuser))//all key value pair in obj
console.log(tinderuser.hasOwnProperty("name"))
