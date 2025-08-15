"use strict";
// class User {
//     public email: string
//     private name: string
//     readonly city: string = "empty"
//     constructor(email: string, name: string) {
//         this.email = email
//         this.name = name
//     }
// }
class User {
    constructor(email, name) {
        this.email = email;
        this.name = name;
        this.count = 1;
        this.count2 = 1;
        this.city = "empty";
    }
    set setcount(a) {
        this.count = a;
        this.count2 = a;
    }
    get getcount() {
        this.handledelete();
        return this.count + this.count2;
    }
    handledelete() {
        console.log("Deleted!");
    }
}
class subuser extends User {
    constructor() {
        super(...arguments);
        this.isValid = true;
    }
    changecount2() {
        this.count2 = 99999;
        return this.count2;
    }
}
const hitesh = new User("hitesh@.com", "hitesh");
// hitesh.city="patna"
console.log(hitesh.city);
console.log(hitesh.getcount);
hitesh.setcount = 100;
console.log(hitesh.getcount);
// hitesh.handledelete()
// console.log(hitesh.name)
const hitesh2 = new subuser("hitesh@.com", "hitesh");
console.log(hitesh2.isValid);
console.log(hitesh2.changecount2());
