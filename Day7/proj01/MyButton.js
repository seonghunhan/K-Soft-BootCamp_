function MyButton(props){
    const [isClicked, setIsClicked] = React.useState(false);

    return React.createElement(
        'button',
        {onClick: ()=> setIsClicked(true)},
        isClicked ? '눌러짐' : '여기를 눌러주세요!'
    )
}

const domContainer = document.querySelector('#root');
ReactDOM.render(React.createElement(MyButton), domContainer);