#include "DigBot.h"

DigBot::DigBot(){
    setBotType(digging);
};
DigBot::~DigBot() = default;

void DigBot::act(Game& game) {};
