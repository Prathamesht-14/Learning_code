//const sessionIDToUserMap=new Map();
const jwt=require("jsonwebtoken")
const secret='parth123'
function setUser(user){
    //sessionIDToUserMap.set(id,user);
    
return jwt.sign({
    _id:user._id,
    email:user.email,
    role:user.role,
},secret);
}

function getUser(token){
  // return  sessionIDToUserMap.get(id);
  if(!token){
    return null;
  }
  return jwt.verify(token ,secret);
}

module.exports={
    getUser,setUser
}