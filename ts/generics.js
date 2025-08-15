"use strict";
// function sum<T extends {a:number ,b:number}> (num:T):number {return num.a + num.b; }
function sum(num) { return num.a + num.b; }
console.log(sum({ a: 1, b: 2 }));
