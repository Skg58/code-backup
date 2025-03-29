function gen(str1, str2, str3) {
    let g=Math.random();
    let num = Math.floor(g*10);
    console.log(g,num);
    if (num<3) {
        return str1;
    }
   else if (num>6) {
        return str2;
    }
    else {
        return str3;
    }
}



// console.log(gen("Crazy","Amazing","Fire")+" " +gen("Engine","Food","Garment")+" "+gen("Bros","Limited","Hub"));
console.log(`${gen("Crazy","Amazing","Fire")} ${gen("Engine","Food","Garment")} ${gen("Bros","Limited","Hub")}`);