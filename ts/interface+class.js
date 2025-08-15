"use strict";
class uploadYoutube {
    constructor(length, breadth) {
        this.length = length;
        this.breadth = breadth;
    }
}
class uploadinsta {
    constructor(length, breadth) {
        this.length = length;
        this.breadth = breadth;
    }
    upload(name) {
        console.log(`Uploaded,${name}!`);
    }
}
const ig = new uploadinsta(10, 20);
ig.upload("suraj");
