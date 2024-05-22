let auditoriums = [
    {name: "A101", capacity: 15, faculty: "Physics"},
    {name: "B201", capacity: 20, faculty: "Mathematics"},
    {name: "C301", capacity: 12, faculty: "Chemistry"},
    {name: "D401", capacity: 18, faculty: "Biology"},
    {name: "E501", capacity: 10, faculty: "Computer Science"}
];

function displayAllAuditoriums(auditoriums) {
    auditoriums.forEach(auditorium => {
        console.log(`Name: ${auditorium.name}, Capacity: ${auditorium.capacity}, Faculty: ${auditorium.faculty}`);
    });
}

function displayAuditoriumsByFaculty(auditoriums, faculty) {
    auditoriums.forEach(auditorium => {
        if (auditorium.faculty === faculty) {
            console.log(`Name: ${auditorium.name}, Capacity: ${auditorium.capacity}, Faculty: ${auditorium.faculty}`);
        }
    });
}

function displaySuitableAuditoriums(auditoriums, group) {
    auditoriums.forEach(auditorium => {
        if (auditorium.faculty === group.faculty && auditorium.capacity >= group.studentCount) {
            console.log(`Name: ${auditorium.name}, Capacity: ${auditorium.capacity}, Faculty: ${auditorium.faculty}`);
        }
    });
}

function sortAuditoriumsByCapacity(auditoriums) {
    return auditoriums.sort((a, b) => a.capacity - b.capacity);
}

function sortAuditoriumsByName(auditoriums) {
    return auditoriums.sort((a, b) => a.name.localeCompare(b.name));
}
