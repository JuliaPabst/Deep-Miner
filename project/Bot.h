#ifndef PROJECT_BOT_H
#define PROJECT_BOT_H
#include <iostream>
#include "Game.h"

using namespace std;

typedef enum BotType{
    sort, dig
} BotType;

class Bot {
public:
    Bot();
    virtual ~Bot();
    virtual void act(Game game) = 0;
    void place();
    void move();
private:
    BotType botType;
    vector <int> position;
    int points;
};


#endif //PROJECT_BOT_H
