const name="hitesh"
const rapocount=50
console.log(name+rapocount+"value")//avoid this way
console.log('hello my name is $ {name} and my rapocount is ${rapocount}' )
const gamename=new String("hit-es-h")//way to declare string
console.log(gamename[0]);
console.log(gamename.__proto__);
console.log(gamename.length)
console.log(gamename.toUpperCase())
console.log(gamename.charAt(5));
console.log(gamename.indexOf('t'));
const newstring=gamename.substring(0,4)
console.log(newstring)
const another=gamename.slice(0,4)
const another2=gamename.slice(-2,4)
console.log(another)
console.log(another2)
const newstr="    hitesh "
console.log(newstr)
console.log(newstr.trim())
const url="https://hitesh./hitesh%20com"
console.log(url.replace('%20', '-'))
console.log(url.includes('hit'))
//split string or convert into array
// console.log(gamename.split('-'))
console.log(newstr.split(' '))
