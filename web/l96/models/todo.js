import mongoose from "mongoose";

const todoschema =new mongoose.Schema({
 name :{ type :String,required:true,default:"vishal"},
 desc : String,
isdone:Boolean,
days : Number
});

export const todo = mongoose.model('todo', todoschema);
