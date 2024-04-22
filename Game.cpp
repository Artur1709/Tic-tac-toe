#include "Game.h"
#include "iostream"

using namespace std;
//Ustawienie przekazanej referencji jako argumenty konstruktora.
Game::Game(Plansza &plansza, Player &a, Player &b) : player1(a), player2(b), p(plansza)
{
}
//Metoda klasy wizualująca kolejnosc gry w przypadku gracza 1.
[[noreturn]] void Game::gameStart()
{
    while(true)
    {
        p.show();
        player1.move();
        checkWin();
        checkDraw();
        p.show();
        player2.move();
        checkWin();
        checkDraw();
        p.show();

    }
}
//Metoda klasy wizualująca kolejnosc gry w przypadku gracza 2.
[[noreturn]] void Game::gameStart1()
{
    while(true)
    {
        p.show();
        player2.move();
        checkWin();
        checkDraw();
        p.show();
        player1.move();
        checkWin();
        checkDraw();
        p.show();

    }
}
//Metoda Klasy Game, która sprawdza wszelkie możliwe kombinacje wygranej.
void Game::checkWin()
{
    if((p.plansza[0]==p.plansza[1] and  p.plansza[1]==p.plansza[2] ) )
    {
        p.show();
        cout << "Wygrywa gracz:" << p.plansza[0]<< endl;
        Game::asktoRestart();
    }

    if((p.plansza[3]==p.plansza[4] and  p.plansza[4]==p.plansza[5]) )
    {
        p.show();
        cout << "Wygrywa gracz:" << p.plansza[3]<< endl;
        Game::asktoRestart();
    }

    if((p.plansza[6]==p.plansza[7] and  p.plansza[7]==p.plansza[8] ))
    {
        p.show();
        cout << "Wygrywa gracz:" << p.plansza[6]<< endl;
        Game::asktoRestart();
    }

    if((p.plansza[0] == p.plansza[3] and p.plansza[3]==p.plansza[6]))
    {
        p.show();
        cout << "Wygrywa gracz:" << p.plansza[0]<< endl;
        Game::asktoRestart();
    }

    if((p.plansza[1] == p.plansza[4] and  p.plansza[4]==p.plansza[7] ) )
    {
        p.show();
        cout << "Wygrywa gracz:" << p.plansza[1]<< endl;
        Game::asktoRestart();
    }
    if((p.plansza[2] ==  p.plansza[5]  and  p.plansza[5]==p.plansza[8] ) )
    {
        p.show();
        cout << "Wygrywa gracz:" << p.plansza[2] << endl;
        Game::asktoRestart();
    }


    if((p.plansza[0] == p.plansza[4]  and p.plansza[4] == p.plansza[8] ) )
    {
        p.show();
        cout << "Wygrywa gracz:" << p.plansza[0] << endl;
        Game::asktoRestart();
    }

    if((p.plansza[2] == p.plansza[4]  and  p.plansza[4]==p.plansza[6] ) )
    {
        p.show();
        cout << "Wygrywa gracz:" << p.plansza[2] << endl;
        Game::asktoRestart();
    }


}
//Metoda klasy Game, która losuje od którego gracza ma zacząć się gra szanse 50/50.
void Game::start(int random)
{
    if(random==1)
    {
        gameStart();
    }
    else
    {
       gameStart1();
    }
}
//Metoda klasy Game sprawdzajaca czy zdarzył się remis.
void Game::checkDraw() {
    int n = 0;
    for (int i = 0; i <= 9; i++) {
        if (p.plansza[i] == 'X' or p.plansza[i] == 'O') {
            n++;
        }
    }
    if (n == 9) {
        p.show();
        cout << "IT'S A DRAW!" << endl;
        cout << '\n' << endl;
        Game::asktoRestart();

    }
}
//Resetowanie gry.
void Game::restart()
{
    p.plansza[0]='1';
    p.plansza[1]='2';
    p.plansza[2]='3';
    p.plansza[3]='4';
    p.plansza[4]='5';
    p.plansza[5]='6';
    p.plansza[6]='7';
    p.plansza[7]='8';
    p.plansza[8]='9';
    cout<< "RESTARTTT. " << endl;
    Game::gameStart1();
}
//Pytanie po wygranej jednego z gracza czy chce zrestartować grę.
void Game::asktoRestart()
{
    cout << "If u want to restart game press 'Y', to end press anything excpect " << endl;
    char choose;
    cin >> choose;
    if(cin.fail())
    {
        cout << "Złe dane, spróbuj ponownie" << endl;
    }
    else
    {
        switch(choose)
        {
            case 'Y':
                Game::restart();
            case 'y':
                Game::restart();
            default:
                exit(0);
        }
    }

}




