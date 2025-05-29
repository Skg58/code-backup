import React, { useEffect } from 'react'

const navbar = ({ color }) => {

  // Case 1: Run on every render 
  useEffect(() => {
    alert("Hey I will run on every render")
  })

  // Case 2: Run only on first render 
  useEffect(() => {
    alert("Hey welcome to my page. This is the first render")
  }, [])

  // Case 3: Run only when certain values change
  useEffect(() => {
    alert("Hey I am running because color was changed")
  }, [color])

  useEffect(() => {
    alert("for unmounted")
    return () => {
      alert("navbar has  unmounted")
    }
  }, [])


  return (
    <div>
      <h1 style={{ color: { color } }} >I am navbar of {color} color</h1>
    </div>
  )
}

export default navbar
