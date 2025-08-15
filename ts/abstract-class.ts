abstract class uploadv{
   protected constructor(public size:number, public name:string) {
    }
   abstract getdata(name:string):number
    sayhelllo ():void{
        console.log("message")
    }
}

class uploadoninsta extends uploadv{
      constructor(public size:number, public name:string,public price:number) {
        super(size, name);
    }
   getdata(name:"SURAJ"): number {
       console.log(name)
       return 0;
   }

}

const obj =new uploadoninsta(200,"video",100)
console.log(obj)
console.log(obj.price)
console.log(obj.name)
// console.log(obj.getdata("suraj"))
console.log(obj.getdata("SURAJ"))
obj.sayhelllo()
