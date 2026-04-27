const{getUser}=require("../service/auth")

// async function restrictloggedinuser(req,res,next){
//    // const userUid=req.cookies?.uid; for cookie

//     if(!userUid) {

//         return res.redirect("/login");}
//     //const user=getUser(userUid);console.log("User from getUser:", user);
//     if(!user) {
//         return res.redirect('/login');}
//         req.user=user;
//     next();
// }
//below for header response
// function checkforAuthentication(req,res,next){
//     const authorizationHeaddervalue=req.headers["authorization"];
//     req.user=null;
//     if(!authorizationHeaddervalue||!authorizationHeaddervalue.startswith("Bearer"))
//         return next();
//     const token=authorizationHeaddervalue.split("Bearer")[1];
//     const user=getUser(token)
//     req.user=user;
//     return next();
// }
function checkforAuthentication(req,res,next){
    const tokencookie=req.cookies?.token;
    req.user=null;
    if(!tokencookie)
        return next();
    const token=tokencookie;
    const user=getUser(token)
    req.user=user;
    return next();
}
//authorization
function restrictTo(roles){
    return function(req,res,next){
        if(!req.user) return res.redirect("/login");
        if(!roles.includes(req.user.role))return res.end("unauthorized")
            return next();
    }
}
module.exports={
checkforAuthentication,restrictTo
}