
#ifndef TICTACTOE_GAME_H
#define TICTACTOE_GAME_H
#include "Player.h"
class Game{
    Player &player1;
    Player &player2;
    Plansza &p;

public:
    Game(Plansza &plansza, Player &a, Player &b);

    [[noreturn]] void gameStart();
    [[noreturn]] void gameStart1();
    void start(int random);
    void checkWin() ;
    void checkDraw() ;
    void restart();
    void asktoRestart();
};


#endif //TICTACTOE_GAME_H
