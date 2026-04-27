import { useEffect, useState } from 'react'
import React  from 'react'
import {createRoot} from 'react-dom/client'
import {BrowserRouter,Routes,Route,useParams,NavLink} from "react-router-dom"


const root=createRoot(document.getElementById('root'));
const Home = () =>{
  const[Post,setPost]=useState([]);
  useEffect (() =>{
    fetch("https://jsonplaceholder.typicode.com/posts")
    .then((data) =>data.json())
   .then((data) =>setPost(data) )
  },[])
  return( 
  <div>
    <div className='post-container'>{
    Post.map((post)=>(
      <NavLink key={post.id} style={{display:"block"}} to={`/post/${post.id}`}>{post.title}</NavLink>
    ) )

    }</div>
  </div>
  )
}
const About = () =>{
  return (
    <div>
      <h1>About Page</h1>
    </div>
  )
}
const Profile = () =>{
return  (<div>
    <h1>Profile Page</h1>
  </div>)
}
const Settings = () =>{
  return  (<div>
      <h1>Settings Page</h1>
    </div>)
  }
const Sayuser = () => {
  const params=useParams();
 return ( <div>
    <h1>Your name is {params.userName}</h1>
  </div>)
}
const Postpage = () =>{
  const params =useParams();
  const [data,setdata]=useState(null);
  useEffect (() =>{
    fetch(`https://jsonplaceholder.typicode.com/posts/${params.postId}`)
    .then((data) =>data.json())
   .then((data) =>setdata(data) )
  },[])
  if(data==null) return <p>Loading</p>;
  return (<div><h1>{data.title}</h1>
  {data.body}
  </div>)
}
root.render(
  <React.StrictMode>
   <BrowserRouter>
     <Routes>
      <Route path="/" element={<Home/>}/>
      <Route path="/about" element={<About/>} />
      <Route path="/post/:postId" element={<Postpage/>}/>
      <Route path="/user/:userName" element={<Sayuser/>}/>
      <Route path="account">
      <Route path="profile" element={<Profile/>}/>
      <Route path="settings" element={<Settings/>}/>
      </Route>
     </Routes>
   </BrowserRouter>
  </React.StrictMode>
)
