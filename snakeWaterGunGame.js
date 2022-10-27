const prompt=require("prompt-sync")({sigint:true});
const character ='SWG';

function SWG(){
    return character[Math.floor(Math.random()*3)];
}
let rounds=parseInt(prompt("Enter no of rounds you want to play : "))
console.log("===SNAKE WATER GUN===");
console.log("Enter S for Snake | W for Water | G for Gun");
let userPoints=0 , computerPoints=0;
while(rounds)
{
    user=prompt("Enter your choice : ");
    
    computer=SWG();
    console.log("computer ->"+computer);
    
    if(user=="S"||user=="s" && computer=="W" )
    {
        console.log("You win this round");
        userPoints++;
    }
    else if(user=="G"||user=="g" && computer=="W")
    {
        console.log("You loss this round");
        computerPoints++;
    }
    else if(user=="W"||user=="w" && computer=="S")
    {
        console.log("You loss this round");
        computerPoints++;
    }
    else if(user=="W"||user=="w" && computer=="G")
    {
        console.log("You win this round");
        userPoints++;
    }
    else if(user=="S"||user=="s" && computer=="G")
    {
        console.log("You loss this round");
        computerPoints++;
    }
    else if(user=="G"||user=="g" && computer=="S")
    {
        console.log("You win this round");
        userPoints++;
    }
    else
    {
        console.log("Round tie");
    }
    rounds--;
    

}
if(userPoints>computerPoints)
{
    console.log("\nYOU WIN 🎉🎉")
}
else if(computerPoints>userPoints)
{
    console.log("\nYOU LOSS 😭")
}
else
{
    console.log("\nGAME TIE 😑")
}
