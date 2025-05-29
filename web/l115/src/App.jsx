import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import Navbar from './assets/components/navbar'
import About from './assets/components/about.jsx'
import Login from './assets/components/login.jsx'
import User from './assets/components/user.jsx'
import {
  createBrowserRouter,
  RouterProvider,
} from "react-router";

 

function App() {
 
const router = createBrowserRouter([
  {
    path: "/",
    element: <> <Navbar/>  <div><h1>Hello World</h1></div>,</>
  },
  {
    path: "/about",
    element:   <> <Navbar/> <About/>,</>   
  },
  {
    path: "/login",
    element:   <> <Navbar/> <Login/>,</>  

  },
  {
    path: "/user",
    element:  <> <Navbar/> <User/>,</>

  },
  {
    path: "/user/:username",
   
    element:  <> <Navbar/> <User/>,</>

  },
]);

  return (
   <>
 <RouterProvider router={router} />

   </>
  )
}

export default App
