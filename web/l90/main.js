const express = require('express')
const app = express()
const port = 3000
const birds = require('./routes/birds')
const fs = require('fs')


// own  middleware 
app.use((req, res, next) =>{
  console.log('LOGGED')
  next()
})


app.use('/birds', birds)
app.get('/', (req, res) => {
  res.send('Hello World!')
  fs.appendFileSync("harry.txt",`${Date.now()} is a ${req.method}\n`)
})

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})