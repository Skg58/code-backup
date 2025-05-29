import React from 'react'
import { memo } from 'react'

const navbar = ({adjective,getAdjective}) => {
    console.log("Navbar is re-rendering...")
  return (
    <div>
      i am a {adjective} navbar
      <button onClick={()=>{getAdjective()}} >{getAdjective()}</button>
    </div>
  )
}

export default  memo(navbar)
