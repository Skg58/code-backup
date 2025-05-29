import React from 'react'
import { useSelector, useDispatch } from 'react-redux'

const navbar = () => {
    const count = useSelector((state) => state.counter.value)
  return (
    <div>
      <h1>i am a navbar and count is {count}</h1>
    </div>
  )
}

export default navbar
