// let inp = document.querySelector("input");
// let button = document.querySelector("button");
// let ul = document.querySelector("ul");

// button.addEventListener("click", function(){
//     let item = document.createElement("li");
//     item.innerText = inp.value;
//     ul.append(item);

//     let delbtn = document.createElement("button");
//     delbtn.innerText = "delete";
//     delbtn.classList.add("delete");
//     item.append(delbtn);
//     inp.value = "";

//     delbtn.addEventListener("click", function(){
//         let par = this.parentElement;
//         par.remove();
//     });
// });


// h1 = document.querySelector("h1");

// function changeColor(color,delay){
//     return new Promise((resolve,reject) => {
//         setTimeout(() => {
//             h1.style.color = color;
//             resolve("color changed");
//         },delay)
//     });
// }

// changeColor("red",1000)
//     .then(() =>{
//         console.log("red color done");
//         return changeColor("orange", 1000);
//     })
//     .then(()=>{
//         console.log("orange color done");
//         return changeColor("blue",1000);
//     })
//     .then(()=>{
//         console.log("blue color done")
//     })
// changeColor("red",1000, () => {
//     changeColor("orange",1000, () => {
//         changeColor("green",1000, () => {
//             changeColor("blue",1000);
//         });
//     });
// });

// function savetoDb(data,success,failure){
//     let internetSpeed = Math.floor(Math.random() * 10) + 1;
//     if(internetSpeed > 4){
//         success();
//     }else{
//         failure();
//     }
// }
// savetoDb("apna college", 
//     () =>{
//         console.log("your data saved");
//     savetoDb("akshay",
//         () =>{
//             console.log("succes2");
//             savetoDb("hello world",
//                 () => {
//                     console.log("succes 3");
//                 },
//                 () =>{
//                     console.log("failure 3")
//                 }
//             )
//         },
//         () =>{
//             console.log("failure2");
//     });
// }, 
// () =>{
//     console.log("data not saved");
// })

// function savetoDb(data){
//     return new Promise((resolve, reject) => {
//         let internetSpeed = Math.floor(Math.random() * 10) + 1;
//         if(internetSpeed > 4){
//             resolve("data saved");
//         }else{
//             reject("no");
//         }
//     });  
// }
// savetoDb("akshay")
//     .then(() =>{
//         console.log("promise was fullfilled");
//         return savetoDb("hello world")
//     })
//     .then(()=>{
//         console.log("data 2 saved");
//     })
//     .catch(()=>{
//         console.log("promise rejected");
//     });


// async function greet(){
//     // throw "404 page not found"
//     return "hello world";
// }

// greet()
// .then((result)=>{
//     console.log("promise fullfilled");
//     console.log("answer is :", result);
// })
// .catch((error)=>{
//     console.log("rejected");
//     console.log("promise rejected with error: ", error);
// })

// function getnum(){
//     return new Promise((resolve,reject)=>{
//         setTimeout(()=>{
//             let num = Math.floor(Math.random() * 10) + 1;
//             console.log(num);
//             resolve();
//         }, 1000);
//     })
// }

// async function demo(success){
//     await getnum();
//     await getnum();
//     await getnum();
//     await getnum();
//     await getnum();
// }


// h1 = document.querySelector("h1");

// function changeColor(color,delay){
//     return new Promise((resolve,reject) => {
//         setTimeout(() => {
//             h1.style.color = color;
//             console.log(`color changed to ${color}`);
//             resolve();
//         },delay)
//     });
// }

// async function demo(){
//     await changeColor("red",1000);
//     await changeColor("green",1000);
//     await changeColor("yellow",1000);
//     await changeColor("pink",1000);
//     await changeColor("blue",1000);

// }

// let url = "https://catfact.ninja/fact";
// fetch(url)
// .then((promise)=>{
//     console.log(promise)
//     return response.json();
// })
// .then((data)=>{
//     console.log(data.fact);
// })
// .catch((err)=>{
//     console.log("error :", err);
// });

// let url = "https://catfact.ninja/fact";
// async function getfacts(){
//     let res = await fetch(url);
//     let data = await res.json;
//     console.log(data.fact);

// }

// let btn = document.querySelector("button");
// let para = document.querySelector("#result");

// btn.addEventListener("click",async ()=>{
//     let fact = await getfacts();
//     console.log(fact);
//     para.innerText = fact;
// })

// let url = "https://catfact.ninja/fact";
// async function getfacts(){
//     try{
//         let res = await axios.get(url);
//         return (res.data.fact);
//     } catch(e){
//         console.log("error", e);
//     }
// }

let btn = document.querySelector("button");
let img = document.querySelector("#dog");
let url = "https://dog.ceo/api/breeds/image/random";


btn.addEventListener("click",async ()=>{
        let link = await getimage();
        img.setAttribute("src",link)
    })

    async function getimage(){
        try{
            let res = await axios.get(url);
            return res.data.message;
        } catch(e){
            console.log("error", e);
            return "no image found";
        }
    }