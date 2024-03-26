#include "Game.h"

Game::Game() : x_(5), y_(5), z_(10), field_(x_, vector<vector<int>>(y_, vector<int>(z_, 0))){
    fillGame();
}

void Game::fillField() {}