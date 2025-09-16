// Desarrolla un programa en C++ que cuente cuántas veces aparece una letra específica dentro de una cadena. La letra puede estar definida en el código.

#include <iostream>
#include <conio.h>
#include <string.h>


using namespace std;

int main()
{
    char palabra[] = "Programación";
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

