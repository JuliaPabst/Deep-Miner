#ifndef PROJECT_BOT_H
#define PROJECT_BOT_H
#include <iostream>
#include "Game.h"

using namespace std;

typedef enum BotType{
    none, sorting, digging
} BotType;

class Bot {
public:
    Bot();
    virtual ~Bot();
    virtual void act(Game& game) = 0;
    void place();
    void move(Game& game);
    int findNewZ(Game& game);
    void setBotType(BotType botType);
    void setPoints(int points);

private:
    BotType botType_;
    vector <int> position_;
    int points_;
};


#endif //PROJECT_BOT_H
