import { useState } from 'react'
import Header from './Component/Header'
import Todoitem from './Component/Todoitem'
import Button from './Component/Button'
import Countercompunent from './Component/Countercomponent'
import './App.css'
function App() {

  return (
    <>
    
     <div className='todocontainer'><Header name="To Do"/>
     <Countercompunent/>
     <Todoitem completed={false} text="Eat"/>
     <Todoitem completed={false} text="Code"/>
     <Todoitem completed={false} text="Play"/>
     <Todoitem completed={false} text="Excerscise"/>
     <Todoitem completed={false} text="Sleep"/>
     <Button/>
     </div>
    </>
  )
}

export default App
