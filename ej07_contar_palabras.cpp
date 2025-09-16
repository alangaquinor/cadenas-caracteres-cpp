// Crea un programa que cuente cuántas palabras hay en una frase ingresada por el usuario. Considera que las palabras están separadas por espacios.

#include <iostream>
#include <conio.h>
#include <string.h>


using namespace std;

int main()
{
    char frase[200];
    cout << "Ingrese una frase: ";
    cin.getline(frase, 200);

    int palabras = 0;
    bool enPalabra = false;

    for(int i = 0; i < strlen(frase); i++)
    {
        if(frase[i] != ' ' && !enPalabra)
        {
            enPalabra = true;
            palabras++;
        }
        else if(frase[i] == ' ')
            {
                enPalabra = false;
            }
    }

    cout << "Cantidad de palabras: " << palabras << endl;

    getch();

    return 0;
}

