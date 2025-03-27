# Gomoku Game (C++)

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Game Rules](#game-rules)
- [Technologies Used](#technologies-used)
- [Project Structure](#project-structure)
- [Setup and Installation](#setup-and-installation)
- [How to Play](#how-to-play)
- [Future Improvements](#future-improvements)

## Introduction
This is a **Gomoku (Five in a Row) game** implemented in **C++**. It is a strategy board game where players take turns placing pieces on a board, aiming to form a line of five consecutive marks.

## Features
- Full implementation of Gomoku rules.
- Command-line interface for gameplay.
- Move validation and game state tracking.
- Two-player mode.

## Game Rules
- The game is played on a 15x15 board (or a custom size).
- Players take turns placing their respective marks (X or O).
- The first player to align **five marks in a row (vertically, horizontally, or diagonally)** wins.
- If the board is filled without a winner, the game ends in a draw.

## Technologies Used
- **C++** (Game Logic)
- **Console-based UI** (for gameplay interactions)

## Project Structure
```
.
├── Gomoku.cpp           # Main game source code
├── README.md            # Project documentation
```

## Setup and Installation

### **Compiling the Game**
1. **Using g++ (MinGW on Windows/Linux)**:
   ```sh
   g++ Gomoku.cpp -o gomoku_game
   ```
2. **Using an IDE (Dev-C++, CodeBlocks, Visual Studio)**:
   - Open `Gomoku.cpp` in the IDE.
   - Compile and run the project.

## How to Play
- Run the compiled program in the terminal.
- Players take turns entering the coordinates where they want to place their marks.
- The game automatically checks for a winner after each move.
- The game ends when a player wins or the board is full.

## Future Improvements
- Implement an AI opponent for single-player mode.
- Add a graphical user interface (GUI).
- Support for custom board sizes.

