import mongoose from "mongoose";

const todoschema =new mongoose.Schema({
 name :String,
 desc : String,
isdone:Boolean,
days : Number
});

export const todo = mongoose.model('todo', todoschema);
