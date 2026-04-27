const User=require("../Models/user");

async function handleallusers(req,res){
    res.setHeader("X-Myname","Prathamesh")//custom header
    //Always add X to custom header its good practice
    const users = await User.find({});
    return res.json(users);
}
async function handlegetuserbyid(req,res){
    const user=await User.findById(req.params.id);
   if(!user) return res.status(404).json({error:"user not found"});
   return res.json(user)
} 
async function handleupdateuserbyid(req,res){
    await User.findByIdAndUpdate(req.params.id,{last_name:'changed'});
    return res.json({status:"Success"});
}

async function handledeleteuserbyid(req,res)
{await User.findByIdAndDelete(req.params.id)
return res.json({status:"Deleted"}); }

async function handlecreatenewuser(req,res){
    const body=req.body; //req.body mai front end se aya hu  data store hoga
    if(!body||!body.first_name||!body.last_name||!body.gender||!body.job_title){
        return res.status(400).json({msg:"All fields required"})
    }
   const result=await User.create({
        first_name:body.first_name,
        last_name:body.last_name,
        gender:body.gender,
        job_title:body.job_title,
        email:body.email,
    });
    console.log(result);
    
    return res.status(201).json({status:"Success",id:result._id});
}

module.exports={
    handleallusers,handlegetuserbyid,handleupdateuserbyid,handledeleteuserbyid,handlecreatenewuser
}