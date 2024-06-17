function moveBall(event) {
    const ball = document.getElementById('football');
    const fieldRect = document.getElementById('footballField').getBoundingClientRect();
    const mouseX = event.clientX - fieldRect.left;
    const mouseY = event.clientY - fieldRect.top;
    
    const ballX = mouseX - ball.offsetWidth / 2;
    const ballY = mouseY - ball.offsetHeight / 2;
    
    const maxX = fieldRect.width - ball.offsetWidth;
    const maxY = fieldRect.height - ball.offsetHeight;
    
    const finalX = Math.max(0, Math.min(ballX, maxX));
    const finalY = Math.max(0, Math.min(ballY, maxY));
    
    ball.style.transform = `translate(${finalX}px, ${finalY}px)`;
}