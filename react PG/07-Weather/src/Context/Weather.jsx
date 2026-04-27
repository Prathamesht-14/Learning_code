import { createContext,useContext,useState } from "react";
import { getWeatherdataforcity } from "../API";
const WeatherContext=createContext(null);
export const useWeather = () =>{
    return useContext(WeatherContext)
}
export const WeatherProvider = (props) => {
    const [data,setdata]=useState(null);
    const[searchcity,setsearchcity]=useState("")
    const fetchdata =async ()=> {
     const response=await getWeatherdataforcity(searchcity)
     setdata(response)
    }
    return <WeatherContext.Provider value={{searchcity,data,fetchdata,setsearchcity}}>
        {props.children}
    </WeatherContext.Provider>
}