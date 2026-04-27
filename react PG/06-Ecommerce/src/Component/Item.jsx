import React ,{useContext} from "react";
import { CartContext } from "../Context/Cart";
const Item = (props) =>{
    const Cart=useContext(CartContext);
   console.log("Cart",Cart);
   
    
    return(
        <div className="item-card">
            <h4>{props.name}</h4>
            <p>Price:{props.price} Rs</p>
            <button onClick={()=>Cart.setItems([...Cart.Items,{name: props.name,price: props.price}])}>Add to Cart</button>
        </div>
    )
}
export default Item