# 🎲 Number Guessing Game (C++)

A simple console-based **Number Guessing Game** built in **C++**.  
The program randomly selects a number between **1 and 100**, and the player has to guess it with hints provided.

---

## 📌 Features
- Random number generation using `rand()` and `srand()`
- User guesses until the correct number is found
- Hints: "Too high" or "Too low"
- Tracks number of attempts

---

## 🛠️ Technologies Used
- Language: **C++**
- Concepts: 
  - Loops (`do-while`)
  - Conditional statements (`if-else`)
  - Random number generation
  - User input/output

---


## ▶️ How to Run
1. Open the project folder.
2. Compile the code:
   ```bash
   g++ guessing_game.cpp -o guessing_game

🎯 Welcome to the Number Guessing Game!
I have chosen a number between 1 and 100. Can you guess it?
Enter your guess: 50
Too low! Try again.
Enter your guess: 75
Too high! Try again.
Enter your guess: 68
🎉 Congratulations! You guessed the number in 3 attempts.


