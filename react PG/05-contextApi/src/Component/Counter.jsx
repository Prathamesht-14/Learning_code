import React ,{useContext}from "react";
import { ConterContext } from "../Context/Counter";

const Counter = () => {
    const counterContext =useContext(ConterContext);
    return(
        <div>
            <button onClick={()=>counterContext.setCount(counterContext.Count+1)}>Increment</button>
            <button onClick={()=>counterContext.setCount(counterContext.Count-1)}>Decrement</button>
        </div>
    );
};
export default Counter