let n=prompt("enter n");
// let n =10;
let fact=1;
for (let i = 1; i <=n; i++) {
    fact *=i;
}
console.log(fact,n);
alert(fact);

function fac(number){
    let arr=Array.from(Array(number+1).keys());
    arr.slice(1);
    let c = arr.slice(1).reduce((a,b)=>{
        return a*b;
    })
    console.log(c);
}
fac(5);