// Crea un programa en C++ que imprima una cadena de texto al rev�s. Utiliza la funci�n strlen().

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char palabra[]  = "RECONOCER";
    int longitud = strlen(palabra);

    cout <<"Cadena invertida: ";
    for(int i = longitud - 1; i >= 0; i--)
    {
        cout << palabra[i];
    }

    cout << endl;
    getch();

    return 0;
}

