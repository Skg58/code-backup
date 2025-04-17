/* global use, db */
// MongoDB Playground
// To disable this template go to Settings | MongoDB | Use Default Template For Playground.
// Make sure you are connected to enable completions and to be able to run a playground.
// Use Ctrl+Space inside a snippet or a string literal to trigger completions.
// The result of the last command run in a playground is shown on the results panel.
// By default the first 20 documents will be returned with a cursor.
// Use 'console.log()' to print to the debug output.
// For more documentation on playgrounds please refer to
// https://www.mongodb.com/docs/mongodb-vscode/playgrounds/

// Select the database to use.
use('msigmadb');

// Insert a few documents into the sales collection.
db.getCollection('sales').insertMany([
    [
        {
          "name": "suraj",
          "age": 16,
          "gender": "M"
        },
        {
          "name": "anita",
          "age": 18,
          "gender": "F"
        },
        {
          "name": "rahul",
          "age": 20,
          "gender": "M"
        },
        {
          "name": "sneha",
          "age": 17,
          "gender": "F"
        },
        {
          "name": "amit",
          "age": 19,
          "gender": "M"
        }
      ]
      
]);


// Print a message to the output window.
console.log(`DB created sucessfully.`);

