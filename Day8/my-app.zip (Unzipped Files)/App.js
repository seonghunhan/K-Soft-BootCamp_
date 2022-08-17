//import logo from './logo.svg';
import logo from './logo.png';
import './App.css';

function App() {
  return (
    <div className="App">
      <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        <p>
          K Software BootCamp. Inha Univ.
        </p>
        <a
          className="App-link"
          href="https://www.inha.ac.kr"
          target="_blank"
          rel="noopener noreferrer"
        >
          Go Inha University.
        </a>
      </header>
    </div>
  );
}

export default App;
