import React from 'react'

const navbar = () => {
  return (
    <nav>
        <ul className="flex gap-4  " >
            <li className="hover:cursor-pointer" >Home</li>
            <li className="hover:cursor-pointer" >About</li>
            <li className="hover:cursor-pointer" >Contact</li>
        </ul>
    </nav>
  )
}

export default navbar
