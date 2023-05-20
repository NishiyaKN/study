let count = 0
let saveEl = document.getElementById("save-el")
let countEl = document.getElementById("count-el")

function increment(){
    console.log("click")
    count += 1 
    countEl.innerText = count
}

function save(){
    let countStr = count + " - "
    saveEl.textContent += countStr
    //textContent keeps the spaces in the strings
    count = 0
    countEl.innerText = count
}
