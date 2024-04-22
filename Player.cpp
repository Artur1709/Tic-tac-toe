
#include "Player.h"
#include <iostream>
using namespace std;
//Przekazanie do konstruktora planszy.
Player::Player(Plansza &plansza):p(plansza)
{

}
//Metoda klasy umożliwiająca wybieranie pola przez gracza.
void Player::move()
{


        int move;
        cout << "Podaj pole na, ktorym chcesz wykonac swoj ruch "<< "Tura gracza:"<< " " <<player << endl;
        cin >> move;
        if(cin.fail())
        {
            cout << "Zle wprowadzone dane, sprobuj ponownie" << endl;
            cin.clear();
            cin.ignore(1000,'\n');
            p.show();
            Player::move();
        }
        else {
            switch (move) {
                case 1:
                        if (p.plansza[0] != 'X' and p.plansza[0] != 'O') {
                            p.plansza[0] = player;
                        } else {
                            cout << "Pole zajete, prosze wybrac inne" << endl;
                            p.show();
                            Player::move();


                        }


                    break;

                case 2:
                    if (p.plansza[1] != 'X' and p.plansza[1] != 'O') {
                        p.plansza[1] = player;
                    } else {
                        cout << "Pole zajete, prosze wybrac inne" << endl;
                        p.show();
                        Player::move();

                    }

                    break;
                case 3:
                    if (p.plansza[2] != 'X' and p.plansza[2] != 'O') {
                        p.plansza[2] = player;
                    } else {
                        cout << "Pole zajete, prosze wybrac inne" << endl;
                        p.show();
                        Player::move();

                    }

                    break;
                case 4:
                    if (p.plansza[3] != 'X' and p.plansza[3] != 'O') {
                        p.plansza[3] = player;
                    } else {
                        cout << "Pole zajete, prosze wybrac inne" << endl;
                        p.show();
                        Player::move();

                    }

                    break;

                case 5:
                    if (p.plansza[4] != 'X' and p.plansza[4] != 'O') {
                        p.plansza[4] = player;
                    } else {
                        cout << "Pole zajete, prosze wybrac inne" << endl;
                        p.show();
                        Player::move();

                    }

                    break;
                case 6:
                    if (p.plansza[5] != 'X' and p.plansza[5] != 'O') {
                        p.plansza[5] = player;
                    } else {
                        cout << "Pole zajete, prosze wybrac inne" << endl;
                        p.show();
                        Player::move();

                    }

                    break;
                case 7:
                    if (p.plansza[6] != 'X' and p.plansza[6] != 'O') {
                        p.plansza[6] = player;
                    } else {
                        cout << "Pole zajete, prosze wybrac inne" << endl;
                        p.show();
                        Player::move();

                    }

                    break;
                case 8:
                    if (p.plansza[7] != 'X' and p.plansza[7] != 'O') {
                        p.plansza[7] = player;
                    } else {
                        cout << "Pole zajete, prosze wybrac inne" << endl;
                        p.show();
                        Player::move();

                    }

                    break;
                case 9:
                    if (p.plansza[8] != 'X' and p.plansza[8] != 'O') {
                        p.plansza[8] = player;
                    } else {

                        cout << "Pole zajete, prosze wybrac inne" << endl;
                        p.show();
                        Player::move();



                    }

                    break;
                default:
                    cout << " Brak takiego ruchu, prosze podaj wlasciwy ruch" << endl;
                    p.show();
                    Player::move();

            }
        }


}
//Pomocnicza metoda, która ustawia obiekt typu gracz na drugą wartość, przez to mamy później dwoch graczy.
void Player::changePlayer()
{
    if(player=='X') {
        player = 'O';
    }
    else
        player = 'X';

}




