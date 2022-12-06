// librerias
#include <iostream>

// Declarar constantes (no se pueden cambiar son const)
// NO LLEVAN IGUAL NI PUNTO Y COMA

#define N 40

using namespace std;


// funcion principal. todas se llevan aqui
int main()
{

// aqui empieza codigo funcion principal

    // const (igual javascript)   int (igual sql)   valor lleva igual y punto y coma final
    const int M=40;

    // float es numero con decimales. se puede declarar 2 formas
    // float num1;
    // float num2;
    // o simplificar:
    float num1, num2;

    // cout = salida
    // endl = salto de linea (\n)
    cout << "Escriba 2 numeros: " << endl;

    // cin es para introducir (en este caso variables por teclado = document write )
    cin >> num1;
    cin >> num2;


    float suma;
    suma=num1+num2;

    cout << "La suma es: " << suma;




    return 0;
}


