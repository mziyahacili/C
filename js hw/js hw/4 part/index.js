let currentLight = 0; 

function changeLight() {
    const lights = document.querySelectorAll('.light');
    const lightColors = ['red', 'yellow', 'green'];

    lights[currentLight].classList.remove(lightColors[currentLight]);

    currentLight = (currentLight + 1) % lightColors.length;

    lights[currentLight].classList.add(lightColors[currentLight]);
}