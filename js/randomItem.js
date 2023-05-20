let hands = ["rock", "paper", "scissor"]

function decision(){
    let i = Math.floor(Math.random() * 3)
    return hands[i]
}
console.log(decision())
