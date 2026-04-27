//array elements of different datatype
const myarr=[0,1,2,3,4,5]
//console.log(myarr[0])
const arr=new Array(1,2,3,4,5)
const myhero=["varun","hritik"]
myarr.push(6)
myarr.pop()
myarr.unshift(9)
myarr.unshift(6)
myarr.shift()
myarr.indexOf(2)
const newarray=myarr.join()
console.log("A",myarr)
const my1=myarr.slice(1,3)
console.log(my1)
console.log("B",myarr)
const myn2=myarr.splice(1,3)
console.log("C",myarr);
console.log(myn2);
//slice original array not changed
//splice original array changed and in new array last range included 
// console.log(myarr)
// console.log(newarray)
// console.log(myarr.includes(9))