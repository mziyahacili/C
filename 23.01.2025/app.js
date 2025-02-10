const fs = require('fs');
const readline = require('readline');
const path = require('path');

const FILE_PATH = path.join(__dirname, 'books.json');

const loadBooks = () => {
  try {
    const data = fs.readFileSync(FILE_PATH, 'utf8');
    return JSON.parse(data);
  } catch (error) {
    return [];
  }
};

const saveBooks = (books) => {
  fs.writeFileSync(FILE_PATH, JSON.stringify(books, null, 2), 'utf8');
};

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

const books = loadBooks();

const addBook = () => {
  rl.question('Введите название книги: ', (title) => {
    rl.question('Введите автора: ', (author) => {
      rl.question('Введите год издания: ', (year) => {
        rl.question('Введите жанр: ', (genre) => {
          const newBook = {
            id: Date.now(),
            title,
            author,
            year: parseInt(year),
            genre
          };
          books.push(newBook);
          saveBooks(books);
          console.log('Книга добавлена!');
          showMenu();
        });
      });
    });
  });
};

const listBooks = () => {
  if (books.length === 0) {
    console.log('Список книг пуст.');
  } else {
    console.log('\nСписок книг:');
    books.forEach((book, index) => {
      console.log(`${index + 1}. [${book.id}] ${book.title} - ${book.author} (${book.year}) - ${book.genre}`);
    });
  }
  showMenu();
};

const deleteBook = () => {
  rl.question('Введите ID книги для удаления: ', (id) => {
    const index = books.findIndex(book => book.id == id);
    if (index !== -1) {
      books.splice(index, 1);
      saveBooks(books);
      console.log('Книга удалена!');
    } else {
      console.log('Книга с таким ID не найдена.');
    }
    showMenu();
  });
};

const updateBook = () => {
  rl.question('Введите ID книги для обновления: ', (id) => {
    const book = books.find(book => book.id == id);
    if (!book) {
      console.log('Книга не найдена.');
      return showMenu();
    }
    rl.question(`Новое название (${book.title}): `, (title) => {
      rl.question(`Новый автор (${book.author}): `, (author) => {
        rl.question(`Новый год издания (${book.year}): `, (year) => {
          rl.question(`Новый жанр (${book.genre}): `, (genre) => {
            book.title = title || book.title;
            book.author = author || book.author;
            book.year = year ? parseInt(year) : book.year;
            book.genre = genre || book.genre;
            saveBooks(books);
            console.log('Книга обновлена!');
            showMenu();
          });
        });
      });
    });
  });
};

const showMenu = () => {
  console.log('\nМеню:');
  console.log('1. Добавить книгу');
  console.log('2. Показать все книги');
  console.log('3. Удалить книгу');
  console.log('4. Обновить книгу');
  console.log('5. Выйти');
  rl.question('Выберите действие: ', (choice) => {
    switch (choice) {
      case '1':
        addBook();
        break;
      case '2':
        listBooks();
        break;
      case '3':
        deleteBook();
        break;
      case '4':
        updateBook();
        break;
      case '5':
        rl.close();
        break;
      default:
        console.log('Неверный выбор!');
        showMenu();
    }
  });
};

showMenu();
