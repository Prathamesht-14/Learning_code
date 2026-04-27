import React from "react";
const Postcard =(props) =>{
    return(
        <div className="Post-card">
        <h3>{props.id}</h3>
        <p>{props.body}</p>
        </div>
    );
}

export default Postcard