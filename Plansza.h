
#ifndef TICTACTOE_PLANSZA_H
#define TICTACTOE_PLANSZA_H



class Plansza {
    char  plansza[9]={'1', '2', '3', '4', '5', '6', '7', '8', '9'}; //Inicjalizacja planszy.
    friend class Player;       //Zaprzyjaznienie klasy plansza z klasą Player, by móc odnosić się do elementów prywatnych.
    friend class Game;         //Tak samo jak u góry.
public:
    void show() const;         //Deklaracja metody klasy, const dlatego, że ta funkcja nie zmienia żadnych danych, ona tylko wyświetla.


};


#endif //TICTACTOE_PLANSZA_H
