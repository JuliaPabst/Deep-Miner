#include "Bot.h"
Bot::Bot(BotType botType) : botType_(botType), points_(0) {}
Bot::~Bot() = default;
void Bot::place() {};
void Bot::move() {};