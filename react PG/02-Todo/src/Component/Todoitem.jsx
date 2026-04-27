import React from "react";
const Todoitem = (props)=>{
    return(
       <> <li className="todoitems">
        <span>
           {props.completed? <></>: <input type="checkbox" />}
            <span className="todoitemtext">{props.text}</span>
        </span>
        </li></>
    )
}
export  default Todoitem;