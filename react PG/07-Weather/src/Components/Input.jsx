import  React from 'react'
import { useWeather } from '../Context/Weather';
const Input = () => {
    const Weather=useWeather();
    return (
        <input 
        className='input-field'
       placeholder='search-here'
        value={Weather.searchcity}
        onChange={(e) =>Weather.setsearchcity(e.target.value)}/>
    );
};
export default Input