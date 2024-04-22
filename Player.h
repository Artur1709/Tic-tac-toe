
#ifndef TICTACTOE_PLAYER_H
#define TICTACTOE_PLAYER_H

#include "Plansza.h"


class Player{
    Plansza &p;                    //deklaracja obiektu typu plaszna, przez co przekazuje plansze do konstruktora.
    char player='X';               //Pierwszy gracz 'X', przez co użyłem metodę "ChangePlayer".
public:
    explicit Player(Plansza &plansza) ; //Konstruktor jednoparamterowy przez co przednim stoi explicit.
    void move();                        //Deklaracja metody.
    void changePlayer();                //Deklaracja metody.
};



#endif //TICTACTOE_PLAYER_H
