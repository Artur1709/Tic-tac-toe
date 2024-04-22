#include <iostream>
#include "Plansza.h"

using namespace std;
//Metoda pokazująca cały aktualny stan planszy.
void Plansza::show() const
{

    std::cout << " " << plansza[0] << " | " << plansza[1] << " | " << plansza[2] << "\n";
    std::cout << "___|___|__" << "\n";
    std::cout << " " << plansza[3] << " | " <<plansza[4] << " | "<< plansza[5] << "\n";
    std::cout << "___|___|__" << "\n";
    std::cout << " " << plansza[6] << " | " <<  plansza[7] << " | " << plansza[8] << "\n";
    std::cout << "   |   |  " << "\n\n";





}










