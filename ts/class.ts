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
    private count: number = 1
    protected count2: number = 1

    readonly city: string = "empty"
    constructor(public email: string, private name: string) {
    }

    set setcount(a: number) {
        this.count = a
        this.count2 = a
    }
    get getcount(): number {
        this.handledelete()
        return this.count + this.count2
    }
    private handledelete() {
        console.log("Deleted!")
    }
}

class subuser extends User {
    isValid: boolean = true
    changecount2(): number {
        this.count2 = 99999
        return this.count2
    }

}
const hitesh = new User("hitesh@.com", "hitesh")
// hitesh.city="patna"
console.log(hitesh.city)
console.log(hitesh.getcount)
hitesh.setcount = 100
console.log(hitesh.getcount)
// hitesh.handledelete()
// console.log(hitesh.name)
const hitesh2 = new subuser("hitesh@.com", "hitesh")
console.log(hitesh2.isValid);
console.log(hitesh2.changecount2());



