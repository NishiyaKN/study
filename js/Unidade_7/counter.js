async function asyncCounter() {
  for (let i = 1; i <= 5; i++) {
    await new Promise(resolve => setTimeout(resolve, 1000));
    
    console.log(i);
  }
}

asyncCounter();

