const http = require('http');
const fs = require('fs');

 
const fileName = 'data.txt';

 
const server = http.createServer((req, res) => {
  if (req.url === '/file') {
    
    if (req.method === 'GET') {
      fs.readFile(fileName, 'utf8', (err, data) => {
        if (err) {
          if (err.code === 'ENOENT') {
            res.writeHead(404, { 'Content-Type': 'text/plain' });
            res.end('File not found');  
          } else {
            res.writeHead(500, { 'Content-Type': 'text/plain' });
            res.end('Error reading the file');  
          }
        } else {
          res.writeHead(200, { 'Content-Type': 'text/plain' });
          res.end(data);  
        }
      });
    }
    
    else if (req.method === 'POST') {
      let body = '';

     
      req.on('data', chunk => {
        body += chunk;
      });

      req.on('end', () => {
        fs.writeFile(fileName, body, 'utf8', (err) => {
          if (err) {
            res.writeHead(500, { 'Content-Type': 'text/plain' });
            res.end('Error writing to the file');  
          } else {
            res.writeHead(200, { 'Content-Type': 'text/plain' });
            res.end('File updated successfully');  
          }
        });
      });
    } else {
      res.writeHead(405, { 'Content-Type': 'text/plain' });
      res.end('Method not allowed');  
    }
  }
  else if(req.url === '/time'){
    const currentTime = new Date().toLocaleTimeString();
    res.writeHead(200, {'Content-Type' : 'text/plain'});
    res.end(`Current time: ${currentTime}`); 
  } 
  else if(req.url === '/data'){
    const currentDate = new Date().toISOString().split('T')[0]; 
    res.writeHead(200, {'Content-Type' : 'text/plain'});
    res.end(`Current time: ${currentDate}`); 
  }
  else {
    res.writeHead(404, { 'Content-Type': 'text/plain' });
    res.end('404: Page not found');  
  }
});

 
server.listen(3000, () => {
  console.log('Сервер работает на порту 3000');
});
