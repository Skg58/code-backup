type User ={
    name:string,
    email:string
}



function get (user :User):User{
    return {name:"" ,email:""}
}

let u= {name:"s" ,email:"k",ispaid:"true"}

get({name:"s" ,email:"k"})
get(u)


export {}