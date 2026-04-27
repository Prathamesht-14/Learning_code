import React ,{useState} from "react";
const Countercomponent = () =>{
    const [Count,setCount]=useState(0);
    return(
        <div>
            <p>Count Component {Count}</p>
            <h6>Number is {Count % 2 === 0 ? "Even" : "Odd"}</h6>
            <button onClick={()=>setCount(Count+1)}>Increment</button>
            <button onClick={()=>setCount(Count-1)}>Decrement</button>
            
        </div>
    );
}
export default Countercomponent