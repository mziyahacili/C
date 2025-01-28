const {readFile,writeFile} = require('./fileManager');

readFile('example.txt')
    .then(data => {
        console.log('Содержимое файла: ', data);
    })
    .catch(err => {
        console.error(err);
    });

writeFile('example.txt', 'Hello, Node.js!')
    .then(message => {
        console.log(message);
    })
    .catch(err => {
        console.error(err);
    });