import { useState } from 'react'
import Item from './Component/Item'
import './App.css'
import Cart from './Component/Cart'
function App() {

  return (
    <>
    <Item name="Asus-vivobook" price={600000}/>
    <Item name="Asus-Mouse" price={600}/>
    <Item name="Laptop-Sleeve" price={280}/>
    <Cart/>
    
    </>
  )
}

export default App
