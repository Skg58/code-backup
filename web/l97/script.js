import mongoose from "mongoose";

mongoose.connect('mongodb://localhost:27017/');

let button = document.getElementById("button")

button.addEventListener("click",()=>{
    console.log("WORKING...")
})