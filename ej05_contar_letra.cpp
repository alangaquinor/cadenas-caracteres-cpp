// Desarrolla un programa en C++ que cuente cu�ntas veces aparece una letra espec�fica dentro de una cadena. La letra puede estar definida en el c�digo.

#include <iostream>
#include <conio.h>
#include <string.h>


using namespace std;

int main()
{
    char palabra[] = "Programaci�n";
    char letra = 'a';
    int contador = 0;

    for(int i = 0; i < strlen(palabra); i++)
    {
        if(palabra[i] == letra)
        {
            contador++;
        }
    }

    cout << "La letra '" << letra << "' aparece " << contador << " veces." << endl;

    getch();

    return 0;
}

