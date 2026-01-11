#pragma once
#include "spaceship.hpp"

class Game {
    public:
        Game(); //constructor
        ~Game(); // destructor
        void Draw();
        void Update();
        void HandleInput();

    private:
        Spaceship spaceship;
};