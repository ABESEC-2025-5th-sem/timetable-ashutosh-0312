const http  = require('http');


const myserver = http.createServer((req, res) => {
    console.log('server1');
    if (req.url == '/') {
        res.end('Hello from Home Page');
    } else if (req.url == '/about') {
        res.end('Hello from About Page');
    } else {
        res.end('404 Page Not Found');
    }
});
myserver.listen(8000, () => console.log('Server 1 is running on port 8000'));