import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
//import App from './App';
//import CommentList from './chap_05/CommentList';
//import Library from './chap_03/Library';
//import Clock from './chap_04/Clock';
//import NotificationList from './chap_06/NotificationList';
import Accommodate from './chap_07/Accommodate';
import reportWebVitals from './reportWebVitals';

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
   <React.StrictMode>
     <Accommodate />
   </React.StrictMode>
);
/*
setInterval(
  ()=>{
    root.render(
      <React.StrictMode>
        <Clock />
      </React.StrictMode>
    );
  },
  1000)
*/
reportWebVitals();


// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals