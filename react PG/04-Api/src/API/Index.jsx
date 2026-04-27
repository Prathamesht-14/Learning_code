
export const getPosts = async () => {
    const response = await fetch("https://jsonplaceholder.typicode.com/comments", { method: "GET" });
    return response.json(); 
  }
  

  export const getRandomuser = async () => {
    const response = await fetch("https://randomuser.me/api/", { method: "GET" });
    return response.json(); 
  }
  