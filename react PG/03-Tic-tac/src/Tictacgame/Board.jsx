import React from 'react';
import { useState } from 'react';
import Square from './Square';
const Board = () => {
    const handleclick = (index) => {
        if(State[index]!=null){
            return;
        }
      const copystate=[...State];
      copystate[index]=isXturn ?"X":"O";
      setState(copystate)
      setisXturn(!isXturn)  
        
    }
    const[State,setState]=useState(Array(9).fill(null))
    const[isXturn,setisXturn]=useState(true);
    const checkwinner = () => {
        const winnerlogic=[
            [0,1,2],
            [3,4,5],
            [6,7,8],
            [0,3,6],
            [1,4,7],
            [2,5,8],
            [0,4,8],
            [2,4,6],
        ];
        for(let logic of winnerlogic){
            const [a,b,c]=logic;
            if (State[a] === State[b] && State[b] === State[c] && State[a] !== null) {
                return State[a];
            }
            
        }return false;
    };
    const HandleReset = () => {
        setState(Array(9).fill(null));
    }
    const Winner=checkwinner();
    return(
        <div className='board-container'>
            {Winner ? (<>{Winner} Won the game 
            <button onClick={HandleReset}>Play again</button>
            </> ) :
           ( <> 
           <h4>Player {isXturn ? "X":"O"} please move</h4>
            <div className='board-row'>
                <Square onClick={()=> handleclick(0)} value={State[0]}/>
                <Square onClick={()=> handleclick(1)} value={State[1]}/>
                <Square onClick={()=> handleclick(2)}  value={State[2]}/>
            </div>
            <div className='board-row'>
                 <Square onClick={()=> handleclick(3)}  value={State[3]}/>
                <Square onClick={()=> handleclick(4)}  value={State[4]}/>
                <Square onClick={()=> handleclick(5)}  value={State[5]}/>
            </div>
            <div className='board-row'>
                <Square onClick={()=> handleclick(6)}  value={State[6]}/>
                <Square onClick={()=> handleclick(7)}  value={State[7]}/>
                <Square onClick={()=> handleclick(8)}  value={State[8]}/>
            </div></>)}
        </div>
    )
}
export default Board;