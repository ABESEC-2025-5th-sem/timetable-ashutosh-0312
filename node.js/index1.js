const fs = require('fs');
// fs.readFile('.abes.txt', 'Hii ABES Engineering College students.',()=>{});
// fs.readFile("./abes.txt", "utf8", (err,result) =>{
//     if(err){
//         console.log("Error", err);}
//         else{
//             console.log( result);
//         }
// });
// console.log(result);
// append with sync
// fs.appendFileSync("./.abes.txt",'phd');

// append with async
// fs.appendFile("./.abes.txt",'mtech',()=>{});

//copy sync
// fs.cpSync("./.abes.txt", "./a1.txt");

//copy unsync
fs.cp("./.abes.txt", "./a2.txt",()=>{});