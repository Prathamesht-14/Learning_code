import React from "react";
import { useCart } from "../Context/Cart";
const Cart= () => {
    const cart=useCart();
    const Total=cart.Items.reduce((a,b) => a+b.price,0)
    return (
        <div className="cart">
            <h1>Cart</h1>{
                cart && cart.Items.map((item)=> 
                <li>
                    {item.name} -{item.price}
                </li>
                )
            }
            <h5>Total Bill : {Total} Rs</h5>
        </div>
    )
}
export default Cart