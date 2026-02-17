const fs = require('fs');
fs.unlink('./a1.txt', (err) =>  {
    if (err) {
        console.log("Error", err);
    } else {
        console.log("File deleted successfully");
    }
});


