const coding=["c++","java","python","c"]
const value=coding.forEach( function (item){console.log(item);
    return item
     })
console.log(value)
const mynums=[1,2,3,4,5,6,7,8,9,0]
// const newnums=mynums.filter((num)=>num>4)
// const newnums=mynums.filter((num)=>{return num>4})
// console.log(newnums);
newnum=[]
mynums.forEach((num)=>{
    if(num>4){
        newnum.push(num)
    }
})
//console.log(newnum );
// const mynum=[1,2,3,4,5,]
// let nwes=mynum.map((num)=>num+10)
// mynew=mynum.
// map((num)=>num*10)
// .map((num)=>num+1)
// .filter((num)=>num>20)
// console.log(mynew)

const mynumberss=[1,2,3]
const mytotal=mynumberss.reduce(function(acc,curr){
    console.log(`acc ${acc} curr ${curr}`)
    return acc+curr},0)
   console.log(mytotal);
    const total=mynumberss.reduce((acc,curr)=>acc+curr ,0)
    