#include "Bot.h"
Bot::Bot() : botType_(none), points_(0) {}
Bot::~Bot() = default;
void Bot::place() {};
void Bot::move() {};
void Bot::setBotType(BotType botType) {
    botType_ = botType;
};
void Bot::setPoints(int points){
    points_ = points;
}