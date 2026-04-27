const express=require("express")
const{handleallusers,handlecreatenewuser,handlegetuserbyid, handleupdateuserbyid,handledeleteuserbyid}=require("../Controllers/user")
const router=express.Router();

router.route("/").get(handleallusers).post( handlecreatenewuser);

router.get("/:id", handlegetuserbyid);


router.patch('/:id',handleupdateuserbyid);

router.delete('/:id',handledeleteuserbyid);


module.exports=router;