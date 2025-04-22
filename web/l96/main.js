// https://www.npmjs.com/package/mongodb

import mongoose from "mongoose";
import express from "express";
 import  { todo } from "./models/todo.js";

let con = mongoose.connect("mongodb://localhost:27017/todo")
const app = express()
const port = 3000

app.get('/', (req, res) => {
    // const todos = new todo({name :"aarav" ,desc:"done",isdone:true,days:365})
    const todos = new todo({desc:"done",isdone:true,days:365})
    todos.save()
    res.send('Hello World!')

})
app.get('/a', async (req, res) => {
    let  todos = await todo.find({})
   console.log(todos);
   
    // res.json({name :todos.name,desc: todos.desc})
    res.json(todos)

})

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})


