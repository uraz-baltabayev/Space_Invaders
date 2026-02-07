# Space Invaders (C++)

**Space Invaders** is a classic 2D arcade shooter game clone written in C++.  
The player controls a ship at the bottom of the screen and must shoot descending aliens before they reach the bottom.  
This project demonstrates basic game loop architecture, input handling, sprite rendering, and collision detection in C++.

---

## Features

- Classic Space Invaders gameplay
- Player movement and shooting
- Multiple alien waves
- Collision detection
- Simple graphics and sound support
- Built using CMake

---

## Build & Run

### Prerequisites

- C++ compiler (g++, clang++, or Visual Studio)
- CMake
- Any required game libraries (SDL2, SFML, or OpenGL depending on your implementation)

### Clone the Repo

```bash
git clone https://github.com/uraz-baltabayev/Space_Invaders.git
cd Space_Invaders

''' Build

mkdir build
cd build
cmake ..
make

'''' Run

./Space_Invaders

### License
This project is open source. Feel free to use and modify it.

-----------------------------------------------

├── CMakeLists.txt       # Build configuration
├── src/                 # Source code
│   └── main.cpp         # Game entry point
├── font/                # Font files used in the game
├── graphics/            # Graphics files (sprites, backgrounds)
├── README.md            # Project documentation
└── .gitignore           # Git ignore rules


