let newCard = 0
let yourCards = []
let dealerCards = []

let sum = null
let dealerSum = null

let winCount = 0
let lossCount = 0

let hasBlackJack = false
let isAlive = false

let player = {
    name: "Tuxxer",
    chips: 200
}

let playerEl = document.getElementById("player-el")
let message = document.getElementById("message-el")
let cardsEl = document.getElementById("cards-el")
let result = document.getElementById("sum-el")
let buttonStart = document.getElementById("btn-start")
let buttonDraw = document.getElementById("btn-draw")
let buttonEndPlay = document.getElementById("btn-end")
let dealerHand = document.getElementById("dealer-hand")
let gameRatio = document.getElementById("ratio")

playerEl.textContent = player.name + " - $" + player.chips

function startGame(){
    if (!isAlive){
        isAlive = true
        hasBlackJack = false
        player.chips -= 5
        playerEl.textContent = player.name + " - $" + player.chips

        cardsEl.textContent = "Cards: "

        let firstCard = randomCard()
        let secondCard = randomCard()
        yourCards = [firstCard,secondCard]
        sum = firstCard + secondCard

        let dealerFirstCard = randomCard()
        let dealerSecondCard = randomCard()
        dealerHand.textContent = "Dealer cards: " + dealerFirstCard + " ?"
        dealerCards = [dealerFirstCard,dealerSecondCard]
        dealerSum = dealerFirstCard + dealerSecondCard

        checkCards()
    }
}

function checkCards(){
    
    cardsEl.textContent = "Cards: "
    for (let i = 0; i < yourCards.length; i++){
        cardsEl.textContent += yourCards[i] + " "
    }
    result.textContent = "Sum: " + sum

    if (sum < 21){
        messageTurn = "Do you want to draw a new card?"

    } else if (sum === 21){
        messageTurn = "BLACKJACK!!!"
        isAlive = false
        hasBlackJack = true
        player.chips += 10
        playerEl.textContent = player.name + " - $" + player.chips
        winCount += 1
        dealerHand.textContent = "Dealer cards: " + dealerCards[0] + " " + dealerCards[1]
        gameRatio.textContent = "Win/Loss: " + winCount + " / " + lossCount

    } else {
        messageTurn = "You lost ;-;"
        isAlive = false
        dealerHand.textContent = "Dealer cards: " + dealerCards[0] + " " + dealerCards[1]
        lossCount += 1
        gameRatio.textContent = "Win/Loss: " + winCount + " / " + lossCount
    }

    message.textContent = messageTurn
}
function drawAnotherCard(){
    if (isAlive && !hasBlackJack){
        let newCard = randomCard()
        yourCards.push(newCard)
        sum += newCard
        checkCards()
    }
}

function endPlay(){
    if (isAlive){
        isAlive = false
        dealerHand.textContent = "Dealer hand: " + dealerCards[0] + " and " + dealerCards[1] 
        if (sum > dealerSum){
            message.textContent = "You won!"
            player.chips += 10
            playerEl.textContent = player.name + " - $" + player.chips
            winCount += 1
        }
        // else if (sum === dealerSum){
        //     player.chips += 5
        //     playerEl.textContent = player.name + " - $" + player.chips
        //     message.textContent = "It's a draw!" }
        else{
            message.textContent = "You lost ;-;"
            lossCount += 1
        }
        // buttonStart.textContent = "START GAME"
        gameRatio.textContent = "Win/Loss: " + winCount + " / " + lossCount
        }
}

function randomCard(){
    let random = Math.floor(Math.random() * 13) + 1

    if (random > 10){
        return 10
    }

    else if (random === 1){
        return 11
    }

    else {
        return random 
    }
}

