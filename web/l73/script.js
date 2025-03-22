function createCard(title, cname, views, monthsold, duration, thumbnail) {
    let box = document.createElement("div");
    box.className = "box";
    document.querySelector(".container").append(box);
    box.insertAdjacentText("afterbegin", "welcome");
    let img = document.createElement("span");
    img="https://i.ytimg.com/vi/tVzUXW6siu0/hqdefault.jpg?sqp=-oaymwEmCKgBEF5IWvKriqkDGQgBFQAAiEIYAdgBAeIBCggYEAIYBjgBQAE=&rs=AOn4CLB6VzxANxt3dHm91HW9lLfDlxvmuA";

    box.appendChild(img);

}


createCard("l45", "welcome", "codewithharry", "50k", 7, "21:22", "https://i.ytimg.com/vi/tVzUXW6siu0/hqdefault.jpg?sqp=-oaymwEmCKgBEF5IWvKriqkDGQgBFQAAiEIYAdgBAeIBCggYEAIYBjgBQAE=&rs=AOn4CLB6VzxANxt3dHm91HW9lLfDlxvmuA");