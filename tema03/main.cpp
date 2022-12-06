#include <iostream>

using namespace std;

// void equivale a function
// aqui listo todas las funciones que voy a crear
void pintarTabla(int arrayTabla[10]);




int main()
{
    // array tamaño 10 (no es posicion)
    // le añadimos int para decir que todos los elementos de ese array son numeros enteros.
    int Tabla[10];
    pintarTabla (Tabla);


    // return () cierra programa
    return 0;
}


// aqui programa funcion
void pintarTabla (int arrayTabla[10]){

    int i;

    for (i=0; i<10; i++){
        cout << "Valor " << i+1 << ": ";
        cin >> arrayTabla[i];
    }

}
