//for of on map and arr
const arr=[1,2,3,4]
for (const val of arr) {
     //console.log(val)    
}
const greetings="good morning"
for (const greet of greetings) {
    //console.log(`each char is ${greet}`)
}
//map it holds object key value pair no duplicate value
const map=new Map()
map.set(1,"india")
map.set(2,"USA")
map.set(3,"china")
//console.log(map)
for (const [key,value] of map) {
    //console.log(key)
    //console.log(key,':-',value)
}
const myobj={
    1:"a",
    2:"b",
    3:'c'
}
//for of loop cant apply on obj
for (const key in arr) {
  // console.log(`${key}:${myobj[key]}`)
}
//for each
const coding=["c++","java","python","c"]
// coding.forEach( function (item){console.log(item);
// })
// coding.forEach((item)=>{console.log(item);
// })
// function printme(item){
//     console.log(item)  
// }
// coding.forEach(printme)
coding.forEach((item ,indexedDB,arr)=>{
    console.log(item,indexedDB,arr);
    
})
const mycodding=[{
  name:"c++",
  file:"cpp"
},
{
name:"java",
file:"java"
}]
//mycodding.forEach((item)=>{console.log(item.file,item.name)})