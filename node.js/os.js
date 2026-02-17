const os = require('os');
console.log("system platform:", os.platform());
console.log("user info", os.userInfo());
console.log("cpu", os.arch());
console.log("free memory", os.freemem());
console.log("total memory", os.totalmem());
console.log("uptime", os.uptime());
console.log("home directory", os.homedir());
console.log("hostname", os.hostname());  //remote server name