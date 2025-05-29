"use client"
import { submitAction } from "./actions/form";
import { useRef } from "react";
export default function Home() {
  let ref = useRef()
  return (
    <form ref={ref} action={(e) => {
      { submitAction(e); ref.current.reset() }
    }
    } className="w-2/3 mx-auto my-24">
      <div>
        <label htmlFor="name">Name</label>
        <input name="name" type="text" id="name" className="text-black" />
      </div>
      <div>
        <label htmlFor="add">Address</label>
        <input name="add" type="text" id="add" className="text-black" />
      </div>
      <div>
        <button className="border-2 border-red-600"  >submit</button>
      </div>
    </form>
  );
}
