// noTengomiedo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
//Almacenar el nombre de diez estudiantes y mostrar el nombre de la posicion 5.
/*En el centro comercial se cometio un robo donde habian 10 personas, se dice que el robo lo cometio
 la persona que estaba en la posicion 4 pero su nombre segun dicen se llamaba carlos
 recorrer toda la fila y preguntar si el individuo de la posicion 4 se llama carlos*/
#include <iostream>
using namespace std;

int main()
{
    string nombres[10];

    for (int i = 0; i < 10; i++) {
        cout << "Digite el nombre de la posicion " << i << ":" << endl;
        cin >> nombres[i];
    }
    for (int i = 0; i < 10; i++) {
        cout << "El nombre de la posicion " << i << " es:" << nombres[i] << endl;
    }
    for (int i = 0; i < 10; i++) {
        if ((nombres[i] == "Carlos") || (nombres[i] == "carlos")) {
            cout << "Es el culpable" << endl;
            cout << "La gente procede a lincharlo :v" << endl;
            cout << "Se muere :)" << endl;
            cout << "Una rata menos en mi patria :3" << endl;
        }
        else {
            cout << "Siga su camino mi rey" << endl;
        }
    }
   
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
