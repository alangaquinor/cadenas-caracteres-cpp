// Escribe un programa en C++ que compare dos cadenas de texto y determine si son iguales o diferentes. Utiliza la función strcmp().

#include <iostream>
#include <conio.h>
#include <string.h>


using namespace std;

int main()
{
    char palabra1[] = "Hola";
    char palabra2[] = "Alan";

    if(strcmp(palabra1, palabra2) == 0)
    {
        cout << "Las cadenas son iguales." << endl;
    }
    else
    {
        cout << "Las cadenas no son iguales." << endl;
    }

    getch();
    return 0;
}

