#ifndef PROJECT_GAME_H
#define PROJECT_GAME_H
#include <iostream>


using namespace std;

class Game {
public:
    Game();
    void fillField();

private:
    int x_;
    int y_;
    int z_;
    vector<vector<vector<int>>> field_;
};


#endif //PROJECT_GAME_H
