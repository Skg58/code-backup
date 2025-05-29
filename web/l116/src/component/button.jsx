import React, { useContext } from 'react'
import C1 from './c1'
import { CounterContext } from '../context/context'


const button = () => {
    const value = useContext(CounterContext)
  return (
    <div>
        <button onClick={() => value.setCount((count) => count + 1)} >
        < C1  />
        <div>I am btn</div>
        </button>
    </div>
  )
}

export default button
