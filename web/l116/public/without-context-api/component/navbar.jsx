import React from 'react'
import Button from './button'

const navbar = (props) => {
  return (
    <div>
        <div>Navbar</div>
        <Button count ={props.count}/>
    </div>
  )
}

export default navbar
