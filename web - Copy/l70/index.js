// alert("weelcome");

function gen1(r, t, y, u, i) {
    let c = Math.random() * 10;
    console.log(c);
    if (c < 2) {
        return r;
    }
    else if (c >= 2 && c < 4) {
        return t;
    }
    else if (c < 6 && c >= 4) {
        return y;
    }
    else if (6 <= c && c < 8) {
        return u;
    }
    else {
        return i;
    }
}
function gen2() {
    let c = Math.random() * 10;
    console.log(c);
    if (c < 2) {
        return "red";
    }
    else if (c >= 2 && c < 4) {
        return "voilet";
    }
    else if (c < 6 && c >= 4) {
        return "blue";
    }
    else if (6 <= c && c < 8) {
        return "yellow";
    }
    else {
        return "green";
    }
}

function randomCOLOR(){
    let a=Math.ceil(0+ Math.random()*255);
    let b=Math.ceil(0+ Math.random()*255);
    let c=Math.ceil(0+ Math.random()*255);

    return `rgb(${a},${b},${c})`;
}


Array.from(document.getElementsByClassName("box")).forEach(element => {
    element.style.backgroundColor= randomCOLOR();
    element.style.color= randomCOLOR();

});

// for (let element of document.getElementsByClassName("box")) {
//     element.style.backgroundColor= gen2();
//     element.style.color= gen2();
// }

// for (let index = 0; index < document.getElementsByClassName("box").length; index++) {
//     // document.getElementsByClassName("box")[index].style.backgroundColor = gen1("red", "voilet", "blue", "yellow", "green");
//     document.getElementsByClassName("box")[index].style.backgroundColor = gen2();
//     document.getElementsByClassName("box")[index].style.color = gen2();

// }