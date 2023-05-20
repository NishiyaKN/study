let n1 = 2
let n2 = 8

document.getElementById("num1").textContent = n1
document.getElementById("num2").textContent = n2

let operationSum = document.getElementById("sum")

function add(){
    let result = n1 + n2
    operationSum.textContent = "Result: " + result
}

function subtract(){
    let result = n1 - n2
    operationSum.textContent = "Result: " + result
}

function divide(){
    let result = 2 / 8
    operationSum.textContent = "Result: " + result
}

function multiply(){
    let result = 2 * 8
    operationSum.textContent = "Result: " + result
}
