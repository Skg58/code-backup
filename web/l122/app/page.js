
// import { useState,useEffect } from "react";
import fs from "fs/promises"
import Navbar from "@/components/navbar";

export default function Home() {
  // const [count, setcount] = useState(0)
  console.log("Code is running....")
  let a = fs.readFile("file.txt")
  a.then(e=>{console.log(e.toString())})
  return (
    <>
    <Navbar/>
    count is
     {/* {count} */}
    {/* <button onClick={()=>{setcount(count +1)}}className="hover:cursor-pointer" >click me</button> */}
    </>
  );
}
