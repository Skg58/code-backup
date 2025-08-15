interface uploaddVideo {
    length:number,
    breadth :number
}

class uploadYoutube implements uploaddVideo{
  constructor(public length:number,public breadth:number){}
}

interface createStory  extends uploaddVideo{
    upload(username:string):void
}


class uploadinsta implements createStory{
  constructor(public length:number,public breadth:number){}
  upload(name:"suraj"): void {
    console.log(`Uploaded,${name}!`);
  }

}

const ig= new uploadinsta(10,20)

ig.upload("suraj")