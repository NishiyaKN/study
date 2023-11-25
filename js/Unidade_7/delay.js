async function delay(ms) {
  return new Promise(resolve => setTimeout(resolve, ms));
}

async function chainDelays() {
  console.log("Inicio da primeira função");
  await delay(2000);
  console.log("Fim da primeira função");

  console.log("Inicio da segunda função");
  await delay(2000);
  console.log("Fim da segunda função");

  console.log("Inicio da terceira função");
  await delay(2000);
  console.log("Fim da terceira função");
}

chainDelays();

