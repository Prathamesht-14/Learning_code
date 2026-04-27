//use callback optimise and run
//user effect if change then and on refreshing run
//hooks piyush garg 
//in use effect in case  mounting all except return executed and for unmounting only all under in returnexecuted
 //in time of component update prev comp unmount and new comp mounted
import { useState,useCallback,useEffect,useRef } from "react"
function App() {
  const [length, setlength] = useState(0)
  const [numberallowed,setnumberallowed]=useState(false)
  const[charallowed,setcharallowed]=useState(false)
  const[Password,setPassword]=useState("")
  //useref hook
  const Passwordref=useRef(null)
  const passwordgenerator=useCallback(()=>{
   let pass=""
   let str="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
   if(numberallowed) str+="0123456789";
   if(charallowed) str+="!@#$%^&**()_+{|}:";

   for (let i = 1; i < length; i++) {
    let char=Math.floor(Math.random()*str.length+1)
    pass+=str.charAt(char)
    
   }
   setPassword(pass)
  },
    [length,charallowed
    ,numberallowed,setPassword
  ])
  const copypasswordtoclipboard=useCallback(()=>{
    Passwordref.current?.select();
    Passwordref.current?.setSelectionRange(0,20);
    window.navigator.clipboard.writeText(Password)
  },
  [Password])
  useEffect(()=>{passwordgenerator()},[length ,numberallowed,charallowed,passwordgenerator])
  return (
    <>
    <div className="w-full max-w-md mx-auto shadow-md
    rounded-lg px-4 py-3 my-8 text-orange-500 bg-gray-700">
      <h1 className="text-white text-center my-3">Password Generator</h1>
     <div className="flex shadow rounded-lg
      overflow-hidden mb-4 ">
        <input type="text" value={Password}
        className="outline-none w-full py-1 px-3"
        placeholder="Password" readOnly
        ref={Passwordref}
         />
         <button onClick={copypasswordtoclipboard} class="outline-none bg-blue-700 text-white
          px-3 py-0.5 shrink-0 ">Copy</button>
      </div>
      <div className="flex text-sm gap-x-2">
        <div className="flex items-center gap-x-1">
          <input type="range"
          min={6} max={100}
          value={length} 
          className="cursor-pointer"
          onChange={(e)=>{setlength(e.target.value)}}
          />
          <label>Length:{length}</label>
        </div>
        <div className="flex items-center gap-x-l">
          <input type="checkbox"
           defaultChecked={numberallowed}
           id="numberinput"
           onChange={()=>{
            setnumberallowed((prev)=>!prev)
           }}
          /> 
          <label htmlFor="numberinput">Numbers</label>
        </div>
        <div className="flex items-center gap-x-l">
          <input type="checkbox"
           defaultChecked={charallowed}
           id="charinput"
           onChange={()=>{
            setcharallowed((prev)=>!prev) 
            // got previous value acces by above syntac 
           }}
          /> 
          <label htmlFor="charinput">Characters</label>
        </div>

      </div>
    </div>
    </>
  )
}

export default App

