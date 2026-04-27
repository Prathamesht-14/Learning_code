import { useEffect,useState } from 'react'
import './App.css'
import Usercard from './Components/UserCard'
import {getPosts, getRandomuser} from './API/Index'
import Postcard  from './Components/Postcards'
function App() {
  const[data,setdata]=useState(null);
  const[userdata,setuserdata]=useState(null);
useEffect(() => {
 getPosts().then((posts)=>
setdata(posts));
},[]);

useEffect(() =>{
getRandomuser().then((user) =>setuserdata(user.results[0])
)
}, []);

const refresh = () => {
  getRandomuser().then((user) =>setuserdata(user.results[0])
)
};
  return (
  <> {userdata && <Usercard data={userdata}/>}
    <button onClick={refresh}>Refresh User</button>
   </>
  //  <div className="App">
  //   {data ? (
  //       <ul > 
  //         {data.map((e) => (
  //           <Postcard title={e.id} body={e.body}/>
  //         ))}
  //       </ul>
  //     ) : <p>No data</p>}
  //  </div></>
  
    
  );
}

export default App
