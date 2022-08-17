class Welcome extends React.Component {
    render (){
        return <h1>안녕, {this.props.name}</h1>;
    }
}

const container = document.getElementById('root');
ReactDOM.render(React.createElement(Welcome), container)