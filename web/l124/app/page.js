"use client"
import Image from "next/image";

export default function Home() {
  let data={
    name:"Aarav",
    role:"coder"
  }
  let handler = async () => {
    let a = await fetch("/api/add", {
      method: "POST",
      headers: {
        "Content-Type": "application/json",
      },
      body: JSON.stringify(data),
    })

    let res= a.json();
    console.log(res)
  }


  return (
    <div>
      <h1 className="font-bold text-xl " >Next.js Api routes demo</h1>
      <button onClick={handler}>click me</button>
    </div>
  );
}
