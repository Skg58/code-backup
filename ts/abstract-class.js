"use strict";
class uploadv {
    constructor(size, name) {
        this.size = size;
        this.name = name;
    }
    sayhelllo() {
        console.log("message");
    }
}
class uploadoninsta extends uploadv {
    constructor(size, name, price) {
        super(size, name);
        this.size = size;
        this.name = name;
        this.price = price;
    }
    getdata(name) {
        console.log(name);
        return 0;
    }
}
const obj = new uploadoninsta(200, "video", 100);
console.log(obj);
console.log(obj.price);
console.log(obj.name);
// console.log(obj.getdata("suraj"))
console.log(obj.getdata("SURAJ"));
obj.sayhelllo();
