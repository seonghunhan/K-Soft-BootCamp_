import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import reportWebVitals from './reportWebVitals';
// import App from './App';
// import Library from './chap_03/Library';
// import Clock from './chap_04/Clock';
// import CommentList from './chap_05/CommentList';
import NotificationList from './chap_06/Notification.List';

const root = ReactDOM.createRoot(document.getElementById('root'));

setInterval(
  ()=>{
    root.render(
      <React.StrictMode>
        <NotificationList />
      </React.StrictMode>
    );
  },
  1000)

// root.render(
//   <React.StrictMode>
//     <Clock />
//   </React.StrictMode>
// );

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals();
