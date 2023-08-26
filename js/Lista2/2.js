function executeMultipleTimes(func, times) {
    return function(parameter) {
        for (let i = 0; i < times; i++) {
            parameter = func(parameter);
        }
        return parameter; // Return the final result after executing 'func' multiple times
    }
}

function multiplyByTwo(num) {
    return num * 2;
}

const executeTwice = executeMultipleTimes(multiplyByTwo, 2);
let result = 2; // Initial value
result = executeTwice(result);

// Now, 'result' has been multiplied by 2 twice
console.log(result); // Output: 8
