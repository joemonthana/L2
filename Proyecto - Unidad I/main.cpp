#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;

    cout << endl;
    cout << "***************";
    cout << endl;
    cout << "MENU DE JUEGOS";
    cout << endl;
    cout << "***************";
    cout << endl;
    cout << "Seleccione un juego";
    cout << endl;
    cout << "1 - StarShip";
    cout << endl;
    cout << "2 - Snake";
    cout << endl;
    cout << "Ingrese un numero del menu para seleccionar un juego: ";
    cin >> opcion;
    cout << endl;
    system("cls");
    

    switch (opcion)
    {
    case 1:
        starShip();
        break;
    case 2:
        snake();
        break;
    
    default:
        break;
    }
    return 0;
}
