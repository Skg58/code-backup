
//Select crud database
use("crudsb");

//  db.createCollection("courses");

 //Create a document
//  db.courses.insertOne({
//     name: "sigma web dev",
//     price : 0,
//     discount: 10
//  })

//  db.courses.insertMany([
//     {
//       "name": "Sigma Web Dev",
//       "price": 0,
//       "discount": 10
//     },
//     {
//       "name": "React Masterclass",
//       "price": 499,
//       "discount": 20
//     },
//     {
//       "name": "JavaScript Basics",
//       "price": 199,
//       "discount": 15
//     },
//     {
//       "name": "Advanced CSS",
//       "price": 299,
//       "discount": 25
//     },
//     {
//       "name": "Node.js Bootcamp",
//       "price": 399,
//       "discount": 10
//     },
//     {
//       "name": "MongoDB Essentials",
//       "price": 249,
//       "discount": 12
//     },
//     {
//       "name": "Full Stack Project",
//       "price": 599,
//       "discount": 18
//     },
//     {
//       "name": "Next.js in Practice",
//       "price": 349,
//       "discount": 22
//     },
//     {
//       "name": "HTML & CSS Starter",
//       "price": 99,
//       "discount": 5
//     },
//     {
//       "name": "Express.js Crash Course",
//       "price": 299,
//       "discount": 17
//     }
//   ]
//   )

  //Read a document

//  let a= db.courses.findOne({price : 0})
//  console.log(a);

//  let b= db.courses.find({price : 0})
//  console.log(b.count());
//  console.log(b.toArray());

 //Update a document
//  db.courses.updateOne({price :0},{$set:{price:1000}})
//  db.courses.updateMany({price :1000},{$set:{price:10000}})


//Delete a document

db.courses.deleteOne({price :499 })
// db.courses.deleteMany({price :10000 })

