// Escribe un programa que pida dos cadenas al usuario. Si las cadenas son diferentes, el programa debe concatenarlas y mostrar el resultado. Si son iguales, debe mostrar un mensaje indicando que no se pueden concatenar porque son iguales.

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char cadena1[100], cadena2[100], resultado[200];
    cout << "Ingresa la primera cadena: ";
    cin.getline(cadena1, 100);
    cout << "Ingresa la segunda cadena: ";
    cin.getline(cadena2, 100);

    if(strcmp(cadena1, cadena2) != 0)
    {
        strcpy(resultado, cadena1);
        strcat(resultado, cadena2);
        cout << "Cadenas concatenadas: " << resultado << endl;
    }
    else
    {
        cout  << "Las cadenas son iguales, no se pueden concatenar.";
    }

    getch();

    return 0;
}

