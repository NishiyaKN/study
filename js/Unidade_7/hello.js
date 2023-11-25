async function delayedHello() {
  await new Promise(resolve => setTimeout(resolve, 3000));

  return "Hello";
}

async function run() {
  const result = await delayedHello();
  console.log(result);
}

run();

