$(document).ready(function() {
    const apiKey = '653218fa';
    const baseUrl = 'http://www.omdbapi.com/';
    let currentPage = 1; // Добавляем переменную для текущей страницы

    $('#searchForm').on('submit', function(e) {
        e.preventDefault();
        const title = $('#movieTitle').val();
        const type = $('#type').val();
        currentPage = 1; // Сбрасываем текущую страницу при новом поиске
        fetchMovies(title, type, currentPage);
    });

    function fetchMovies(title, type, page) {
        $.ajax({
            url: baseUrl,
            method: 'GET',
            dataType: 'json',
            data: {
                apikey: apiKey,
                s: title,
                type: type,
                page: page
            },
            success: function(data) {
                if (data.Response === 'True') {
                    displayMovies(data.Search);
                    setupPagination(title, type, page, data.totalResults);
                } else {
                    $('#movieList').empty(); // Очищаем список фильмов
                    $('#pagination').empty(); // Очищаем пагинацию
                    $('#movieDetails').empty(); // Очищаем подробную информацию
                }
            }
        });
    }

    function displayMovies(movies) {
        let output = '<ul>';
        $.each(movies, function(index, movie) {
            const poster = movie.Poster !== "N/A" ? movie.Poster : "https://via.placeholder.com/50x75?text=No+Image";
            output += `
                <li>
                    <div class="movie-item">
                        <img src="${poster}" alt="${movie.Title}" class="movie-poster">
                        ${movie.Title} (${movie.Year})
                    </div>
                    <button class="details-button" data-id="${movie.imdbID}">Details</button>
                </li>
            `;
        });
        output += '</ul>';
        $('#movieList').html(output);

        $('.details-button').on('click', function() {
            const movieId = $(this).data('id');
            fetchMovieDetails(movieId);
        });
    }

    function setupPagination(title, type, page, totalResults) {
        const totalPages = Math.ceil(totalResults / 10);
        let paginationButtons = '';

        if (totalPages > 1) { // Проверяем, что есть больше одной страницы
            for (let i = 1; i <= totalPages; i++) {
                paginationButtons += `<button class="page-button ${i === page ? 'active' : ''}" data-page="${i}">${i}</button>`;
            }
            $('#pagination').html(paginationButtons);
        } else {
            $('#pagination').empty(); // Очищаем пагинацию, если страница одна
        }

        $('.page-button').on('click', function() {
            const page = $(this).data('page');
            currentPage = page; // Обновляем текущую страницу
            fetchMovies(title, type, page);
        });
    }

    function fetchMovieDetails(movieId) {
        $.ajax({
            url: baseUrl,
            method: 'GET',
            dataType: 'json',
            data: {
                apikey: apiKey,
                i: movieId
            },
            success: function(data) {
                if (data.Response === 'True') {
                    displayMovieDetails(data);
                } else {
                    $('#movieDetails').html('<p>Details not found!</p>');
                }
            }
        });
    }

    function displayMovieDetails(movie) {
        const poster = movie.Poster !== "N/A" ? movie.Poster : "https://via.placeholder.com/150x225?text=No+Image";
        const details = `
            <img src="${poster}" alt="${movie.Title}">
            <h2>${movie.Title} (${movie.Year})</h2>
            <p>${movie.Plot}</p>
            <p><strong>Director:</strong> ${movie.Director}</p>
            <p><strong>Actors:</strong> ${movie.Actors}</p>
            <p><strong>Genre:</strong> ${movie.Genre}</p>
        `;
        $('#movieDetails').html(details);
    }
});

