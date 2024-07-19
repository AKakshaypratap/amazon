// function myfunction(){                  // function defination - parameter
//     console.log("hello my name is akshay");
//     console.log("currently persuing btech from iet lucknow");
// }
// myfunction();                           // function call - argument

// sum ka function
// function sum(a,b){
//     console.log(a+b);
// }
// sum(4,4);

// aik or tareeka
// function sum(a,b){
//     s = a+b;
//     return s;
// }
// let result = sum(5,10);
// console.log(result)

// arrow functions - compact way of writing function
// const functionName
// const arrowsum = (a,b) => {
//     console.log(a+b);
// }
// arrowsum(5,15);

// let res = (str) => {
//     let count = 0;
//     for (const char of str){
//         if(char === "a" ||
//            char === "e" ||
//            char === "i" ||
//            char === "o" ||
//            char === "u" ){
//             count++;
//            }
//     }
//     console.log(count);
// }
// res("apnacollege");


// vaise to array ko access is tarah kr skte hai
// let arr = [1,2,3,4,5]
// for (let i=0; i<arr.length ; i++){
//     console.log(arr[i]);
// }

// par aik better way hai is kaam k liye
// For each loops in arrays  jis tarah str.touppercase() se juda hai vaise hii for-each array se juda hai
// callback is a function passed as an argument to another function
let arr = [1,2,3,4,5];
arr.forEach(function printval(val){
    console.log(val);
})
// for each loop eg of higher order function- 
// array methods
// 1) map - creates a new array with the results of some operation.
//for each ka use jb hume noramlly koi calculation ya kuch print krna ho
// map use hota hai jb hume values ko use krke koi nya array create krna ho
//  arr.map((val) => {
//     console.log(val);
// })

// naya array 
let newArr = arr.map((val) => {
    return val*val;
})
console.log(newArr);

//filter - creates new array of elements that give true for condition
// reduce - performs some operations & reduces the array to a single value.








