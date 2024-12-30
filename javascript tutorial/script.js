// Introduction
console.log("Hello, World!"); // Print a message

// Events
document.getElementById("eventButton").onclick = function () {
  alert("Button clicked!");
};

// Variables
let name = "John";
let age = 25;
console.log(`Name: ${name}, Age: ${age}`);

// Operators
let x = 10, y = 5;
console.log("Addition:", x + y);
console.log("Multiplication:", x * y);

// Arithmetic Operators
console.log("Modulus:", x % y);
console.log("Increment:", ++x);
console.log("Decrement:", --y);

// Object
let car = {
  brand: "Toyota",
  model: "Corolla",
  year: 2020,
  color: "White"
};
console.log("Car:", car);

// Date Object
let today = new Date();
console.log("Today:", today);

// While Loop
let i = 0;
while (i < 3) {
  console.log("While Loop Count:", i);
  i++;
}

// For Loop
for (let j = 0; j < 3; j++) {
  console.log("For Loop Count:", j);
}

// Array
let fruits = ["Apple", "Banana", "Cherry"];
fruits.push("Mango");
console.log("Fruits Array:", fruits);

// Example: Sum of an array
let numbers = [1, 2, 3, 4, 5];
let sum = 0;
for (let k = 0; k < numbers.length; k++) {
  sum += numbers[k];
}
console.log("Sum of Array:", sum);

// Displaying results in HTML
document.getElementById("output").innerHTML = `
  Name: ${name}, Age: ${age} <br>
  Today: ${today.toDateString()} <br>
  Car: ${car.brand} ${car.model} (${car.year}), ${car.color} <br>
  Fruits: ${fruits.join(", ")} <br>
  Sum of Numbers: ${sum}
`;
