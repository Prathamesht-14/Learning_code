const {validateToken}=require("../services/authentecation")

function checkAuthenticationCookie(cookiename){
    return (req,res,next)=>{
        const tokenCookieValue=req.cookies[cookiename]
         if(!tokenCookieValue){ req.user = null;
            return next();
         }
         try {
            const User=validateToken(tokenCookieValue);
            req.user=User;
         } catch (error) {
            
         }return next();
    }
}

module.exports={
    checkAuthenticationCookie
}