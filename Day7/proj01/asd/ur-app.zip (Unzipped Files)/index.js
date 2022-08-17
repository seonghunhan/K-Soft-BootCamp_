import React from 'react';
import ReactDOM from 'react-dom/client';
import reportWebVitals from './reportWebVitals';
import App from './App';

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(    
  <React.StrictMode>
    <App />
  </React.StrictMode>
);
reportWebVitals();

/*
let j = 1; // 1~9
function Gugu(props){
  return (
    <div>
      <h1>구구단</h1>
      <h2>2 * {props.i} = {2 * props.i}</h2>
    </div>
  );
 // ReactDOM.render(element, document.getElementById('root'));
}

const root = ReactDOM.createRoot(document.getElementById('root'));
let id = setInterval(()=>{
  // for(let i=1; i <10; i++)
  //   console.log(`2 * ${i} = ${2 * i}`);  
  root.render(    
    <React.StrictMode>
      <Gugu i={j}/>
    </React.StrictMode>
  );
  j++;
}, 1000);

setTimeout(
  ()=>{
    console.log('구구단 종료!');
    clearInterval(id);
  }, 9 * 1000)
*/


// import React from 'react';
// import ReactDOM from 'react-dom/client';
// import './index.css';
// import App from './App';
// //import ConfirmDialog from './ConfirmDialog';
// import reportWebVitals from './reportWebVitals';

// const root = ReactDOM.createRoot(document.getElementById('root'));
// root.render(
//   <React.StrictMode>
//     <App />
//   </React.StrictMode>
// );

// // If you want to start measuring performance in your app, pass a function
// // to log results (for example: reportWebVitals(console.log))
// // or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals

