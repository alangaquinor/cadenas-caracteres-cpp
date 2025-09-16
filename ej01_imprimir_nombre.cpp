// Utilizando la función de cadena de caracteres, crea un programa en donde imprima tu nombre completo.

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char palabra[] = "ALAN";
    char palabra2[] = {'A', 'L', 'A', 'N'};
    char nombre[5];
    cout<<"Digite nombre: ";
    cin.getline(nombre,5,'\n');
    cout<<nombre<<endl;
    getch();
    return 0;
}

