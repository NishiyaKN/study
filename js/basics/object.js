/////////////////////////////////////////

// Object
let person = {
    name: 'sotec',
    age: 36
};

person.name = 'etec';

let selection = 'name';
person[selection] = 'fatec';

console.log(person.name);
/////////////////////////////////////////

// Array
let selectedColors = ['red','blue'];
selectedColors[2] = 3;
console.log(selectedColors[0]);

/////////////////////////////////////////

// Function

function greet(person){
    console.log('Hello ' + person.name + ' ' + person.age);
}
greet(person);

function bye(name){
    console.log('Adios ' + name);
}
bye(person.name);

function square(number){
    return number * number;
}
console.log(square(6));
/////////////////////////////////////////
