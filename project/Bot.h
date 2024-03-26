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
    Bot(BotType botType);
    virtual ~Bot();
    virtual void act(Game game) = 0;
    void place();
    void move();
private:
    BotType botType_;
    vector <int> position_;
    int points_;
};


#endif //PROJECT_BOT_H
