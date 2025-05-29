import React from 'react'
import {  Link ,NavLink } from 'react-router'

const navbar = () => {
  return (
    <nav>
      <ul>
       <NavLink className={(e)=>{ return e.isActive?"red":""}}  to="/"> <li>HOME</li></NavLink  >
       <NavLink className={(e)=>{ return e.isActive?"red":""}}  to="/about"> <li>ABOUT</li></NavLink  >
       <NavLink className={(e)=>{ return e.isActive?"red":""}}  to="/login"> <li>LOGIN</li></NavLink  >
       <NavLink className={(e)=>{ return e.isActive?"red":""}}  to="/user"> <li>USER</li></NavLink  >

       {/* <Link  to="/"> <li>HOME</li></Link >
       <Link  to="/about"> <li>ABOUT</li></Link >
       <Link  to="/login"> <li>LOGIN</li></Link >
       <Link  to="/user"> <li>USER</li></Link > */}
      </ul>
    </nav>
  )
}

export default navbar
