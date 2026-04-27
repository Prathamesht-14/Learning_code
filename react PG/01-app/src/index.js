import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';
import reportWebVitals from './reportWebVitals';

function MYcompo(){
  // const name="prathamesh";
  // return <h1>Hello {name}</h1>
  const link="https://www.google.com/";
  return<a href={link}>Click here</a>
}
const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(<MYcompo/>);

reportWebVitals();
