import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import Navbar from './components/navbar'
import { useSelector, useDispatch } from 'react-redux'
import { decrement, increment,incrementByAmount,multiply,multiplyByAmount } from './redux/counter/counterslice'

function App() {
const count = useSelector((state) => state.counter.value)
  const dispatch = useDispatch()
  return (
    <>
    <Navbar/>
    <div>
    <button onClick={() => dispatch(decrement())} >-</button>
       <div>{count}</div>
    <button  onClick={() => dispatch(increment())}>+</button>
    <button  onClick={() => dispatch(incrementByAmount(10))}>+a</button>
    <button  onClick={() => dispatch(multiply())}>*</button>
    <button  onClick={() => dispatch(multiplyByAmount(10))}>*a</button>
    </div>
     
    </>
  )
}

export default App
