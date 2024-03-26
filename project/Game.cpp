#include "Game.h"
#include <random>
#include <cstdlib> // srand()
#include <ctime>

Game::Game() : x_(5), y_(5), z_(10), field_(x_, vector<vector<int>>(y_, vector<int>(z_, 0))){
    fillField();
}

void Game::fillField() {
    srand(time(NULL));
    for(int i = 0; i < x_; i++){
        for(int j = 0; j < y_; j++){
            for(int k = 0; k < z_; k++){
                field_[i][j][k] = (rand() % 9) + 1;
            }
        }
    }
}

vector<vector<vector<int>>> Game::getField(){
    return field_;
};

int Game::getZ(){
    return z_;
}