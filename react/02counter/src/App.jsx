import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
//reload page means creating new dom
function App() {
  //userstate responsible for changing state and reflect in ui
  let [counter,setCounter]=useState(15);
  //setcounter increases counter  value and reflect whwere needed on ui with avove syntax
  //let counter=15;
   const addValue=()=>{
    setCounter(counter+1)
    //for doing setcounter many times we use below syntax
    //below is interview question
    // setCounter(prevcounter=> prevcounter+1)
    // setCounter(prevcounter=> prevcounter+1)
    // setCounter(prevcounter=> prevcounter+1)
    // setCounter(prevcounter=> prevcounter+1)
  }
    //console.log("value added",counter);
    
   
   const removeValue=()=>{
    if(counter>0){setCounter(counter-1)}
   }

  return (
    <><h1>chai aur code</h1>
    <h2>counter value : {counter}</h2>
    <button
     onClick={addValue}
     >Add value:{counter}</button><br />
    <button onClick={removeValue}>reduce value: {counter}</button>
    </>
    
  
  )
}

export default App
//
