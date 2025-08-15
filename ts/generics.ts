


// ----------------------
interface Size {
    a: number
    b: number
}

// function sum<T extends {a:number ,b:number}> (num:T):number {return num.a + num.b; }
// function sum<T : Size>(num: T): number { return num.a + num.b; }
function sum<T extends Size>(num: T): number { return num.a + num.b; }

console.log(sum<Size>({ a: 1, b: 2 }));


function getdata<T>(details: T[]): T {
    const num = 3;
    // return details[num];
    return details[num] ?? ({} as T)
}


const getfulldata = <T>(details: Array<T>): T => {
    const num = 3;
    return details[num]!;
}


function sum5<T extends number>(num1: T): T {
    return (num1 + 10) as T;
    //  return (num1 + 10) ;


}
interface database {
    uri: string;
    size: number;
}

function anotherfunctions<T, U extends database>(size: T, db: U): object {
    return {

        size: size,
        uri: db.uri

    }
}

anotherfunctions(10, { uri: 'mongodb://localhost:27017', size: 100 });

anotherfunctions<number, database>(10, { uri: 'mongodb://localhost:27017', size: 100 });

anotherfunctions(10, { uri: 'mongodb://localhost:27017', size: 100 });

function neww<T, database>(num: T, b: database): T {
    return num;
}
const k: database = {
    uri: 'mongodb://localhost:27017',
    size: 100
};

neww<number, typeof k>(10, { uri: 'mongodb://localhost:27017', size: 1020 });