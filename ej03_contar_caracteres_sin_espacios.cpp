// Escribe un programa en C++ que cuente cu�ntos caracteres tiene una cadena de texto, excluyendo los espacios. Usa la funci�n strlen() para obtener la longitud total de la cadena.

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char frase[] = "Hola mundo";
    int longitud = strlen(frase);
    int sinEspacios = 0;

    for(int i = 0; i < longitud; i++)
    {
        if(frase[i] != ' ')
        {
            sinEspacios++;
        }
    }

    cout<<"Caracteres sin contar espacios: "<<sinEspacios<<endl;
    getch();

    return 0;
}

