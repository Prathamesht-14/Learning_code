import  React from 'react'
import Input from './Components/Input'
import Card from './Components/Card'
import Button from './Components/Button'
import './App.css'
import { useWeather } from './Context/Weather'

function App() {
  const weather=useWeather();
  return (
    <>
    <div className='App'>
      <h1>Weather Forecast</h1>
      <Input/>
      <Button onClick={weather.fetchdata} value="Search"/>
      <Card/>
      <Button value="Refresh"/>
    </div>
    </>
  )
}

export default App;
