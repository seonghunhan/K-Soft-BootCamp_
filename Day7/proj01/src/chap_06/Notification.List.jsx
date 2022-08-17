import React from "react";
import Notification from "./Notification";

const reservedNotifications = [
    {   
        id : 1,
        message : "안녕하세요, 오늘 일정을 알려드립니다."
    },
    {   
        id : 2,
        message : "오후 세션입니다."
    },
    {   
        id : 3,
        message : "State 와 Life cycle을 학습합니다."
    },
    {   
        id : 4,
        message : "Hook을 학습합니다."
    }
]

var timer;

class NotificationList extends React.Component{
    constructor(props){
        super(props);
        this.state = {
            notifications: [],
        }
    }

    componentDidMount(){
        const { notifications } = this.state;
        timer = setInterval(
            ()=>{
                if(notifications.length < reservedNotifications.length){
                    const index = notifications.length;
                    notifications.push(reservedNotifications[index]);
                    this.setState({ notifications : notifications,})
                }else {
                    clearInterval(timer);
                }
            }, 1000);
    }

    render() {
        return (
            <div>
            {this.state.notifications.map(
                (notification) => {
                    return <Notification Key= {notification.id} message = {notification.message} />
                }
            )}
        </div>
        )

    }
}

export default NotificationList