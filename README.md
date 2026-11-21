# 🎮 Number Guessing Game – C++

A simple **Number Guessing Game** developed using C++. This project allows users to guess a predefined secret integer within a limited number of attempts. The program provides feedback after each guess to help the player find the correct number.

## 📌 Project Description

The Number Guessing Game is a beginner-friendly C++ console application developed as part of a Programming Fundamentals assignment.

In this game, the secret integer is set to `999`, and the player gets a maximum of **5 attempts** to guess it correctly.

After each valid guess, the program displays a message:

- **Too High!** – If the entered number is greater than the secret integer.
- **Too Low!** – If the entered number is smaller than the secret integer.
- **Correct!** – If the player guesses the correct number.
- **Invalid Data Type** – If the player enters text or an invalid integer input.

If the player cannot guess the number within five valid attempts, the game ends and reveals the secret integer.

## ✨ Features

- Simple and user-friendly console interface.
- Maximum of 5 guessing attempts.
- Input validation using `stoi()`.
- Exception handling using `try-catch`.
- Detects invalid text input.
- Provides Too High and Too Low hints.
- Displays the correct answer when the game ends.
- Uses basic C++ programming concepts.

## 🛠️ Technologies Used

- **Programming Language:** C++
- **Header Files:** `<iostream>`, `<string>`
- **Concepts Used:**
  - Variables and Data Types
  - While Loop
  - If-Else Statements
  - String Handling
  - Type Conversion (`stoi`)
  - Exception Handling (`try-catch`)
  - Input Validation

## ▶️ How to Run the Program

1. Clone or download this repository.
2. Open the project in a C++ IDE (such as Visual Studio Code or Dev-C++).
3. Open the `Assignment 7.cpp` file.
4. Compile and run the program.
5. Enter your guesses in the console.

### Compile Using GCC

```bash
g++ "Assignment 7.cpp" -o guessing_game
```

### Run on Windows

```bash
guessing_game.exe
```

## 🎯 Game Rules

1. The secret integer is `999`.
2. You have a maximum of 5 valid attempts.
3. Enter an integer to make a guess.
4. Follow the hints provided by the program.
5. Guess the correct number to win!
6. Invalid inputs are rejected.

## 📂 Project Structure

```text
Number-Guessing-Game/
│
├── Assignment 7.cpp
└── README.md
```

## 📚 Learning Objectives

This project demonstrates the practical implementation of fundamental C++ concepts, including loops, conditional statements, string handling, type conversion, and exception handling.

It is designed to improve logical thinking and problem-solving skills for beginners learning C++ programming.

## 👨‍💻 Author

**Shahkar Ullah Khan**

BS Computer Science Student
University of Engineering and Technology (UET), Peshawar

## 📖 Academic Information

 - **Semester:** 1st Semester
- **Department:** Computer Science
- **University:** UET Peshawar

---

⭐ If you find this project useful, consider giving this repository a star!

**Thank you for visiting my project!**

