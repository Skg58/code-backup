interface user{
    readonly dbid :string,
    email:string,
    googleid ?: string,
    // starttrail :()=>string,
    starttrail():string,
    getdiscount(couponname:string):number
}
interface user{
    github :string
}

interface admin extends user,user2{
    role:"Admin"|"ta"|"Learner"
}

interface user2{}

const u :admin ={
    dbid :"id",
    email:"s@.com",
    github:"skg58",
    starttrail() {
        return "Hii"
    },
    getdiscount(name:"suraj"|"kumar"){
        return 10
    },
 role :"Learner"
}

console.log( u.getdiscount("ramesh"))

export {}