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

void Bot::move(Game& game) {
    char currentMove = ' ';

    std::cout << "Which move do you want to make? (up: w, left: a, down: s, right: d, stay: y" << std::endl;
    std::cin >> currentMove;

    do{
        std::cout << "This option is not available. Try again!" << std::endl;
        std::cout << "Which move do you want to make? (up: w, left: a, down: s, right: d, stay: y" << std::endl;
        std::cin >> currentMove;
    } while (currentMove != 'w' && currentMove != 'a' && currentMove != 's' && currentMove != 'd' && currentMove != 'y');

    if(currentMove == 'w'){
        if (position_[1] == 0){
            position_[1] = 4;
        } else {
            position_[1]--;
        }
    } else if (currentMove == 'a'){
        if (position_[0] == 0){
            position_[0] = 4;
        } else {
            position_[0]--;
        }
    } else if (currentMove == 's'){
        if (position_[1] == 4){
            position_[1] = 0;
        } else {
            position_[1]++;
        }
    } else if (currentMove == 'd'){
        if (position_[0] == 4){
            position_[0] = 0;
        } else {
            position_[0]++;
        }
    }
    position_[2] = findNewZ(game);
};

int Bot::findNewZ(Game& game){
    int newZ = game.getZ();
    while(game.getField()[position_[0]][position_[1]][newZ] == 0){
        newZ--;
    }
    return newZ;
}

void Bot::setBotType(BotType botType) {
    botType_ = botType;
};
void Bot::setPoints(int points){
    points_ = points;
}