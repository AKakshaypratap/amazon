// window object represents an open window in a browser, it's browser global object with lots of properties and methods

// console.log("hello");
// window.console.log("hello");  // both are same thing

// DOM when webpage is loaded, the browser creates a model of the page
// pehle window, document, html, head-body, parent-child-descendants

// console.log(window.document);  // document html ka code dega
// console.dir(window.document);  // document ki properties & methods dega (object ko print krane k liye)

// run time pr dynamic changes krne k liye ise use krte hai
// window.document.body.style.background = "green";

// DOM manipulation
// 1)selecting with id 
// let heading = document.getElementById("heading")
// console.log(heading);
// console.dir(heading);

// 2) selecting with class
// let answer = document.getElementsByClassName("learn-class")
// console.log(answer);
// console.dir(answer);

// 3) selecting with tag
// document.getElementsByTagName("p")  // eg paragraph tag

// sbse best method hota hai query selector

// document.querySelector("myId/ myClass/ tag");   // returns first element 
// document.querySelectorAll("myId/ myClass/ tag")   // returns a nodelist

// properties
// tagname : returns tag for element NodeList
// innertext : returns the text content of the element and all its children (sirf text show hota hai)
// innerHTML : returns the plain text or HTML content in the elements (text k saath html tags bhi show hote hai)
// textContent : returns textual content even for hidden elements

//for accessing and geting attribute of tags
// let divaccess = document.querySelector("div")
// console.log(divaccess);
//  let id = divaccess.getAttribute("id");
//  console.log(id);

 // for changing the class name using javascript
// console.log(divaccess.setAttribute("box", "newbox"));

// for changing style of tags and text etc of body content
// divaccess.style.backgroundColor = "green";

// insert elements
// let newBtn = document.createElement("button");
// newBtn.innerText = "Click Me."                 // pehle creation uske baad screen pr dikhana

// node.append(el) - adds at the end of node (inside)
// eg: jis node k respect mai insert krna hai pehle access krna fir vo parentnod.append(newBtn)

// node.prepend(el) -  adds at start of node (inside)
// node.before(el) - adds before the node (outside)
// node.after(el) - adds after the node (outside)

// class list while accessing the elements and changing the content getattribute change properties completely
// so we use class list it over write the properties

// let btn1 = document.querySelector("#btn1")
// btn1.onmouseover = () =>{
//     console.log("you clicked the button1");
// };

// let div = document.querySelector("div");
// div.onmouseover = () => {
//     console.log("you are inside div");
// };

let mode = document.querySelector("#mode");
let currmode = "light";

mode.addEventListener("click", () => {
    console.log("you are trying to change the mode");
    if(currmode === "light"){
        currmode = "dark";
        document.querySelector("body").style.backgroundColor = "black";
    } else{
        currmode = "light";
        document.querySelector("body").style.backgroundColor = "white";
    } 
    
    console.log(currmode);
})