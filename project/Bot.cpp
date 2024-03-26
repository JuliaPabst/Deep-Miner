#include "Bot.h"
#include <iostream>
#include <cstdlib> // srand()
#include <ctime>

Bot::Bot() : botType_(none), points_(0) {
    place();
}

Bot::~Bot() = default;

void Bot::place() {
    srand(time(NULL));
    int x = rand() % 5;
    int y = rand() % 5;
    int z = rand() % 10;

    position_.resize(3);
    position_[0] = x;
    position_[1] = y;
    position_[2] = z;
};

void Bot::move() {
    char currentMove = ' ';
    std::cout << "Which move do you want to make? (up: w, left: a, down: s, right: d, stay: y" << std::endl;
    std::cin >> currentMove;
};

void Bot::setBotType(BotType botType) {
    botType_ = botType;
};
void Bot::setPoints(int points){
    points_ = points;
}