// ctrl + k dabane se console ki window khaali ho jaaegi

console.log("akshay");

// data types in js
// 1) primitive data type (7)          2) non primitive
// number, string, boolean, undefined, null, biglnt, symbol.
// objects - arrays and functions

// object
// const student = {
//     fullName : "akshay pratap",
//     age : 20,
//     cgpa : 8,
//     ispass : true,
// };

// let a=5 & b=2
// for exponent console.log("a ** b = ",a ** b); 5^2

// unary operator - increment and decrement
//comparison operator 1) equal to (==)   2)not equal (!=)   these can compare strings with numbers
//                    3) strict equal (===) this allows that sting or number should not be compared
//                    4) not equal to & type (!==)  

// loops

// let n=5;
// for(let i=1 ; i<n ; i++){
//     console.log("hello world");
// }

// WAP to calculate the sum of 1 to n.
// let sum = 0;
// for(let i=1 ; i<=5 ; i++){
//     sum = sum + i;
// }
// console.log(sum);

// let n=1;
// while(n<7){
//     console.log(n);
//     n++
// }

// for of loop help for applying on strings & arrays
// str = "akshay";
// size = 0;
// for(let i of str){
//     console.log(i);
//     size++;
// }
// console.log(size);

// for in loop used for objects (structure)
// let student = {
//     fullName : "akshay pratap",
//     age : 20,
//     cgpa : 8,
//     ispass : true,
// };
// for(let key in student){
//     console.log("key=", key, "value=", student[key]); //  key ki value print karega fullname, age, cgpa, ispass
//     console.log()
// }

// template literals - way to have embedded expressions in strings eg:- let spString = `this is literal` o/p is same
// string interpolation - to create strings by doing substitution of placeholders
//                         eg `string text ${expression}string text`

// let obj = {
//     item: "pen",
//     cost: 10,
// };
// aik tareeka console.log("the cost of", obj.item, "is", obj.price);
// let output = `the cost of ${obj.item} is ${obj.cost} rupees`; // ``y backtick hai or iska use
// console.log(output);

// console.log("the cost of", obj.item, "is",obj.cost,"rupees");

// escape sequence and length of string (\t)(\n)

// let str = "apna\tcollege";
// console.log(str.length);

// string methods - 1)str.toUpperCase()     2)str.toLowerCase   3)str.trim() it removes whitespaces from starting and end
// str.slice(start,end?) it returns part of string
// str1.concat(str2) it joins str2 with str1
// str.replace(searchVal,newVal)
// str.charAt(idx)
// js strings are immutable

// let str = "ApnaCollege";
// let newstr = str.toUpperCase();
// console.log(str);
// console.log(newstr);

// arrays
// let marks = [97, 78, 89, 96, 88];
// console.log(marks);
// console.log(marks.length);

// let heroes = ["ironman", "spiderman", "batman", "thor", "hulk"];
// for(let i=0 ; i<heroes.length ; i++){
//     console.log(heroes[i]);
// }

// //for of loop
// for(let hero of heroes){
//     console.log(hero);
// }

//push()     pop()     toString()   concat()    unshift()   shift()
let foodItems = ["tomato", "apple", "litchi", "banana"];
foodItems.push("chips","kurkure");
console.log(foodItems);
foodItems.pop();
console.log(foodItems);
console.log(foodItems.toString());