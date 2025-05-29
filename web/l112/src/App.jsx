import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {
  const [count, setCount] = useState(0)
  // const [name, setname] = useState("harry")
  const [form, setform] = useState({ email: "", phone: "" })
  // const [form, setform] = useState({})

  let handleclick = () => {
    alert("I am just clicked")
  }
  let handleMousehover = () => {
    alert("I am just hovered")
  }
  // let handleChange=(e)=>{
  //   setname(e.target.value)
  // }
  let handleChange = (e) => {
    setform({ ...form, [e.target.name]: e.target.value })
  }

  return (
    <>
      <button onClick={handleclick}>click me</button>
      <div className="red" onMouseOver={handleMousehover} >i am red box</div>
      {/* <input type="text" value={name} onChange={handleChange} /> */}
      <input type="text" name='email' value={form.email ? form.email : ""} onChange={handleChange} />
      <input type="text" name='phone' value={form.phone ? form.phone : ""} onChange={handleChange} />
      {/* <input type="text" name='f' value={form.f ? form.f : "sk"} onChange={handleChange} /> */}
      <input type="text" name='f' value={form.f} onChange={handleChange} />
    </>
  )
}

export default App
