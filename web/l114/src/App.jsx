import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import  Navbar from './components/navbar'


function App() {
  const [count, setCount] = useState(0)

  return (
    <>
    <Navbar/>
    <div className="container mx-auto w-[80vw]">
      <div className="bg-red-800">hii i am div</div>
    </div>
    </>
  )
}

export default App
