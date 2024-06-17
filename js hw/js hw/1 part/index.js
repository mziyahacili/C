
        const usernameInput = document.getElementById('usernameInput');

        usernameInput.addEventListener('input', function(event) {
            const inputText = event.target.value; 
            let filteredText = ''; 

            
            for (let i = 0; i < inputText.length; i++) {
                const char = inputText.charAt(i); 

        
                if (!isNaN(char)) {
                    continue;
                }

                filteredText += char;
            }

            usernameInput.value = filteredText;
        });