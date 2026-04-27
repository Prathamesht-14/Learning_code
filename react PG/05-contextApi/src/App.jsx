import { useState ,useContext } from 'react'
import Counter from './Component/Counter'
import './App.css'
import { ConterContext } from './Context/Counter'

function App() {

   const counterState = useContext(ConterContext);
   console.log("context",counterState);
   
  return (
    <>
     <h1>Count is {counterState.Count}</h1>
     <Counter/>
     <Counter/>
     <Counter/>
     <Counter/>
    </>
  )
}

export default App
