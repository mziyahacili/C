function selectBook(bookElement) {

    const books = document.querySelectorAll('#bookList li');

    books.forEach(book => {
        book.classList.remove('selected');
    });

    bookElement.classList.add('selected');
}