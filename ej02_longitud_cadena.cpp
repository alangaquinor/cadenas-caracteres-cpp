// Utilizando la funci�n strlen(), calcula la cantidad de caracteres que puede tener una frase o palabra.

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char palabra[] = "Alan";
    int longitud = 0;
    longitud = strlen(palabra);
    cout<<"N�meros de elementos de la cadena: "<<longitud<<endl;
    getch();
    return 0;
}

