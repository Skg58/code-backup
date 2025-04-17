const express = require('express')
const app = express()
const port = 3000

app.get('/', (req, res) => {
  res.send('Hello World!')
})

app.post('/', (req, res) => {
  res.send('Hello World2!')
})
app.put('/', (req, res) => {
    console.log("Hey its a put request")
    res.send('Hello World put!')
})

app.get("/index", (req, res) => {
    console.log("Hey its index")
    res.sendFile('templates/index.html', { root: __dirname })
})

app.get("/api", (req, res) => {
    res.json({ a: 1, b: 2, c: 3, d: 4, name: ["harry", "jerry"] })
})

// app.get('/', (req, res) => {
//     console.log("Hey its a get request")
//     res.send('Hello World21!')
// }).post('/', (req, res) => {
//     console.log("Hey its a post request")
//     res.send('Hello World post!')
// })


app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})