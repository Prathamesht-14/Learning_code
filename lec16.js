//object by constructor are  singleton
const mysum=Symbol("key1")
const jsuser={
    name:"Prathamesh",
    location:"Beed",
    age:19,
    "full name":"prathamesh kalyan talekar",
    isloggedin:false,
    lastlogindays:["MONday","tuesday"],
     [mysum]:"My key1"//symbol in obj [] syntax
}
console.log(jsuser.age)
console.log(jsuser["isloggedin"])
console.log(jsuser["full name"])
console.log( jsuser[mysum])
jsuser.age=20
//Object.freeze(jsuser)//cant change object value obj locked
jsuser.age=21
console.log(jsuser)
jsuser.greeting=function(){
    console.log("Hello ji")
}
jsuser.greeting2=function(){
    console.log(`Hello ji, ${this.name}`)
}
console.log(jsuser.greeting())
//console.log(jsuser.greeting)
console.log(jsuser.greeting2())