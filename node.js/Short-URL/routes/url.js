const express=require('express');
const{handlegenerateNewShortURL,handleGetAnalytics}=require("../Controllers/url");
const router=express.Router();
router.post('/',handlegenerateNewShortURL);

router.get('/analytics/:shortId',handleGetAnalytics)
module.exports=router;