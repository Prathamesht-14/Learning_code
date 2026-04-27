const marvel_heroes=["thor","ironman","spiderman"]
const dc_heroes=["superman","flash."]
// console.log(marvel_heroes)
// console.log(marvel_heroes[0][1])
const all_heroes=marvel_heroes.concat(dc_heroes);
console.log(all_heroes)
const allhero=[...marvel_heroes,...dc_heroes]
console.log(allhero)
const anotherarr=[1,2,3,4,[4,5,6,[7,8,9]],[10,11]]
const realarray=anotherarr.flat(Infinity)
console.log(realarray)
console.log(Array.isArray("Hitesh"))
console.log(Array.from("hitesh"))
console.log(Array.from({name:"hitesh"}))//interesting
let score1=100
let score2=200

let score3=300
console.log(Array.of(score1,score2,score3))
