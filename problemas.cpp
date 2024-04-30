/*#include <iostream>
#include "productos.h" // Incluye el archivo de encabezado del ejercicio 1
#include "cuenta-corriente.h" // Incluye el archivo de encabezado del ejercicio 2
#include "ejercicio3.h" // Incluye el archivo de encabezado del ejercicio 3

using namespace std;

int main() {
    int opcion;
    
    cout << "Seleccione el ejercicio que desea ejecutar:" << endl;
    cout << "1. Ejercicio 1" << endl;
    cout << "2. Ejercicio 2" << endl;
    cout << "3. Ejercicio 3" << endl;
    cout << "Ingrese el n�mero de ejercicio: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            // Llama a la funci�n del ejercicio 1
             productos();
            break;
        case 2:
            // Llama a la funci�n del ejercicio 2
            C_c(); // Aqu� se invoca la funci�n correcta
            break;
        case 3:
            // Llama a la funci�n del ejercicio 3
            ejercicio3 ();
            break;
        default:
            cout << "Opci�n no v�lida." << endl;
            break;
    }

    return 0;
}
*/

#include <iostream>
#include "productos.h" // Incluye el archivo de encabezado del ejercicio 1
#include "cuenta-corriente.h" // Incluye el archivo de encabezado del ejercicio 2
#include "ejercicio3.h" // Incluye el archivo de encabezado del ejercicio 3

using namespace std;

int main() {
	void productos();
	void cuentacorriente();
	void ejercicio3();
    
	int opcion;
    
    cout << "Seleccione el ejercicio que desea ejecutar:" << endl;
    cout << "1. Ejercicio 1" << endl;
    cout << "2. Ejercicio 2" << endl;
    cout << "3. Ejercicio 3" << endl;
    cout << "Ingrese el numero de ejercicio: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            // Llama a la funci�n del ejercicio 1
             productos();
            break;
        case 2:
            // Llama a la funci�n del ejercicio 2
            cuentacorriente ();
            break;
        case 3:
            // Llama a la funci�n del ejercicio 3
            ejercicio3 ();
            break;
        default:
            cout << "Opci�n no v�lida." << endl;
            break;
    }

    return 0;
}




