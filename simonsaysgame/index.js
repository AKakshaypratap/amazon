let gameseq= [];
let userseq= [];

let btns = ["red","green","yellow","purple"];

let started = false;
let level = 0;

let h2 = document.querySelector("h2");


document.addEventListener("keypress", function(){
    if(started == false){
        console.log("game started");
        started = true;

        levelUp();
    }
});

function btnFlash(btn){
    btn.classList.add("flash"); 
    setTimeout(function (){
        btn.classList.remove("flash");
    },300);
}

function levelUp(){
    level++;
    h2.innerText = `level ${level}`;

    let randIdx = Math.floor(Math.random() * 3 + 1);
    let randColor = btns[randIdx];
    let randbtn = document.querySelector(`.${randColor}`);  
    console.log(randIdx);
    console.log(randColor);
    console.log(randbtn);
    btnFlash(randbtn);
}