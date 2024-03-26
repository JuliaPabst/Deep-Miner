#ifndef PROJECT_SORTBOT_H
#define PROJECT_SORTBOT_H
#include "Bot.h"
#include "Game.h"

class SortBot: public Bot {
public:
    SortBot();
    virtual ~SortBot() override;
    void act(Game& game) override;
};


#endif //PROJECT_SORTBOT_H
