const mongoose=require('mongoose');
mongoose.set("strictQuery",true);

async function connectTOmongodb(url) {
    return mongoose.connect(url);
}

module.exports={
    connectTOmongodb
}
