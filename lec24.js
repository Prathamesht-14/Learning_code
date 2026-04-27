//IIFE immediately invoked function for avoid global scope pollution
(function chai(){
    console.log(`DB connectes`);
})();//semicolon imp
((name)=>{
    console.log(`connected ${name}`);
})("prathamesh")