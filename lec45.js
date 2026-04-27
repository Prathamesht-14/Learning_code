class  user{
    constructor(username,password){
        //this.email=email;
        this.password=password;
        this.username=username;
    }
    encryptpass(){
        return `${this.password}abc`
    }
}
const chai=new user("prathamesh","@gmail.com",1234)
console.log(chai.encryptpass());
class teacher extends user{
    constructor(username,email,password){
        super(username,password);
        this.email=email
    }
    addcourse(){
        console.log("new course introduced");
        
    }
}
const chaha=new teacher("hitesh"," gmail.com",123)
console.log(chaha.addcourse());

 
