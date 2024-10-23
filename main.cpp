/**
 * @file main.cpp
 * @author Niall Murray
 * @brief Main file
 * @date 2024-10-23
 * 
 * @compile: g++ *.cpp -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system
 */
#include "Game.h"

int main() {
    Game game;
    
    game.run();

    return 0;
}