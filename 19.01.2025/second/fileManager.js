 
const fs = require('fs');

 
function readFile(filePath) {
  return new Promise((resolve, reject) => {
    fs.readFile(filePath, 'utf8', (err, data) => {
      if (err) {
        reject(`Ошибка при чтении файла: ${err.message}`);
      } else {
        resolve(data);
      }
    });
  });
}

 
function writeFile(filePath, content) {
  return new Promise((resolve, reject) => {
    fs.writeFile(filePath, content, 'utf8', (err) => {
      if (err) {
        reject(`Ошибка при записи в файл: ${err.message}`);
      } else {
        resolve('Файл успешно сохранён');
      }
    });
  });
}

 
module.exports = {
  readFile,
  writeFile
};
