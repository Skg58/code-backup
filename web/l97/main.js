
import express from "express"
import mongoose from 'mongoose';




const app = express()
const port = 3000

app.get('/', (req, res) => {
  res.send('Hello World! ,L97')
})

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})

