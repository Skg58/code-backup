function check(s: string | number[]) {
    if (s && typeof s === "string") {  // check s is not null also
        return s.toUpperCase()
    }
    else if (typeof s === "object") { // type of array is object
        return s.length
    }
}

interface student {
    id: number,
    name: string

}

interface teacher {
    id: number,
    name: string
    salary: number

}


function validatesalary(user: student | teacher) {

    if ("salary" in user) {
        return user.salary
    }
}

function logvalue(u:Date |string){
    if (u instanceof Date) {
        console.log(u.toUTCString());
    }
    else{
        console.log(u.toUpperCase());
        
    }
}




type fish ={swim:()=>void}
type bird ={fly():void}

function isfish(pet :fish|bird):pet is fish{
    return (pet as fish).swim !== undefined
}


function food(pet:fish|bird){
    if (isfish(pet)) {
       
       return pet
    }else{
        return pet
    }
}

// Discrimanted Union

interface circle{
    kind :"circle"
    radius:number
}
interface rectangle{
    kind :"rectangle"
    length:number
    breadth :number
}
interface square{
    kind:"square"
    side:number
}

type Shape =circle|rectangle|square

  function area(shape :Shape){
      if (shape.kind=="circle") {
        return Math.PI * shape.radius**2
      }
      return shape.length*shape.breadth
  }

// never+exhausted checking

function getArea(shape:Shape){
    switch(shape.kind){
    case "circle":
        return Math.PI * shape.radius**2
    case "square":
        return shape.side**2
    case "rectangle":
        return  shape.length*shape.breadth
    default:
        const _defaultforshape :never=shape
        return _defaultforshape

}
}


