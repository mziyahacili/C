const http = require('http');   

 
const server = http.createServer((req, res) => {
   
  if (req.url === '/') {
    res.writeHead(200, { 'Content-Type': 'text/plain' });  
    res.end('Welcome to my first Node.js server!'); 
  } else {
 
    res.writeHead(404, { 'Content-Type': 'text/plain' });  
    res.end('404: Page not found');   
  }
});

 
server.listen(3000, () => {
  console.log('Сервер работает на порту 3000');
});
