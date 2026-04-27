//dates
let myDate=new Date()
console.log(myDate.toString())
console.log(myDate.toDateString())
console.log(myDate.toLocaleString())
console.log(typeof myDate)
//date is object
//let mycreatedate=new Date(2023,0,23)
//let mycreatedate=new Date(2023,0,23,5,3)
let mycreatedate=new Date("2023-1-1")
console.log(mycreatedate.toLocaleString())
let mytimestamp=Date.now()
console.log(mytimestamp)
console.log(mycreatedate.getTime())//date to milisecond
//ms to sec
console.log(Math.floor(Date.now()/1000))
let newdate=new Date()
console.log(newdate.getMonth()+1)
console.log(newdate.getFullYear())
console.log(newdate.getMinutes())
newdate.toLocaleString('default',{weekday:"long",
})