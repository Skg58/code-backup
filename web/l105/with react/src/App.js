import logo from './logo.svg';
import './App.css';
import { useState } from 'react';
import Navbar from './components/Navbar';
import Footer from './components/Footer';

function App() {
  const[value,setvalue]=useState(0);
  return (

    <div className="App">
   <Navbar/>
      <div className='value'>{value}</div>
      <button onClick={()=>{setvalue(value+1)}} >click me</button>

      <Footer/>
      <Navbar/>

    </div>

  );
}

export default App;
