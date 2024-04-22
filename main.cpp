
#include "Plansza.h"
#include "Player.h"
#include "Game.h"
#include "ctime"
#include "cstdlib"
#include <iostream>


int main()
{
        srand(time(nullptr));
    int random= rand()%2;          // Losowanie kolejki, aby co restart zaczynał zawsze inny gracz.

        std::cout<<"Tictactoe v1.0" << std::endl;
        Plansza p;
        Player p1(p);
        Player p2(p);
        p2.changePlayer();
        Game gra(p,p1,p2);
        gra.start(random);







}


