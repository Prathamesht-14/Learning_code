import { createContext , useState} from "react";
export const ConterContext= createContext(null);

export const ConterProvider=(props) => {
    const[Count ,setCount]=useState(0)
    return(
        <ConterContext.Provider value={{Count ,setCount}}>
            {props.children}
        </ConterContext.Provider>
    )
}