import { useState } from 'react'
import { useForm } from "react-hook-form"
import './App.css'

function App() {
  const {
    register,
    handleSubmit,
    setError,
    formState: { errors, isSubmitting },
  } = useForm()

  const delay = (d) => {
    return new Promise((resolve, reject) => {
      setTimeout(() => {
        resolve()
      }, d * 1000);
    })
  }

  const onSubmit = async (data) => {
    // await delay(2)//simulating network delay
    let r= await fetch("http://localhost:3000/",{method:"POST",headers:{"Content-Type": "application/json", },body: JSON.stringify(data)})
    let res=await r.text()
    console.log(data,res)
    // if (data.username !=="harry") {
    //   setError("myform",{message:"credentials are invalid"})
    // }
    //  if(data.username === "rohan"){
    //   setError("blocked", {message: "Sorry this user is blocked"})
    // }
  }

  return (
    <>
      {isSubmitting && <div>Submitting...</div>}
      <form action="" onSubmit={handleSubmit(onSubmit)}>
        <input placeholder='username' {...register("username", { required: { value: true, message: "username  is required" }, minLength: { value: 3, message: "min lengthn is 3" }, maxLength: { value: 7, message: "Max length is 7" } })} /> <br />
        {errors.username && errors.username.message}
        <input placeholder='password' {...register("password", { required: { value: true, message: "password is required" }, minLength: { value: 5, message: "min lengthn is 5" } })} /> <br />
        {errors.password && errors.password.message}
        <input disabled={isSubmitting} type="submit" value="submit" />
        {errors.myform && <div> {errors.myform.message}</div>}
        {errors.blocked && <div> {errors.blocked.message}</div>}

      </form>
    </>
  )
}

export default App
