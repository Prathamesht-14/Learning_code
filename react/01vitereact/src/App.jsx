import Chai from "./chai"
function App() {
  //return (<h1>chai aur react with vite PK</h1>)
  //can return only one element at atime 
  const username="prathamesh"
  //use { } for printing variable
  return <><Chai/>
      
           <h1>chai aur react {username}</h1>
           <p>test para</p>
        </>
}
export default App
