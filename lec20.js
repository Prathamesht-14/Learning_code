function calculateprice(...num1){
      return num1
}
console.log(calculateprice(100,200,300))
function calculat(val1,val2,...num1){
    return num1
}
console.log(calculat(1,2,3,4,5))
const user={
 username:"hitesh",
 price:400
}
function handle (anyobject){
 console.log(`user name is ${anyobject.username} and price is ${anyobject.price}`)
}
handle(user)
const mynewarrrayy=[200,300,400,500]
function returnarray(getarray){
    return getarray[1]
}
console.log(returnarray(mynewarrrayy))