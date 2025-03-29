function createCard(title, cName, views, monthsOld, duration, thumbnail) {

    let viewstar;
    if (views < 1000) {
        viewstar = views;
    } else if (views > 1000000) {
        viewstar = views / 1000000 + "M";
    }
    else {
        viewstar = views / 1000 + "K";

    }

    let html = `  <div class="card">
            <div class="image">
            <a href="https://www.youtube.com/watch?v=UzYRQURh_pY&list=PLu0W_9lII9agq5TrH9XLIKQvv0iaF2X3w&index=83">
                <img src="${thumbnail}" alt=""></a>
            <div class="capsule">${duration}</div>
        </div>
        <div class="text">
            <h2>${title}</h2>
            <p>${cName} . ${viewstar} views. ${monthsOld} months ago</p>
        </div>
        </div>`

    document.querySelector(".container").innerHTML = document.querySelector(".container").innerHTML + html;
}




createCard("Introduction to forntend | Sigma Web Dev video #2", "CodeWithHarry", 560000, 7, "31:22", "https://i.ytimg.com/vi/tVzUXW6siu0/hqdefault.jpg?sqp=-oaymwEcCPYBEIoBSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLACwWOixJVrKLFindK92kYMgTcQbw");
