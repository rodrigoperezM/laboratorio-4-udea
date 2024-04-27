/*#include <iostream>
#include "productos.h"
#include <vector>
#include <string>*/

/*#include "productos.h"
#include <iostream>


    
using namespace std;


int main() {
    Tienda tienda;

    // Agregar algunos productos de ejemplo
    Comestible comestible1;
    comestible1.nombre = "Manzana";
    comestible1.marca = "Fruti-fruti";
    comestible1.precio = 100;
    comestible1.cantidadInventario = 100;
    comestible1.descuento = 5;
    comestible1.fechaVencimiento = "01/2025";
    tienda.agregarComestible(comestible1);

    Electronico electronico1;
    electronico1.nombre = "Smartphone";
    electronico1.marca = "TechCorp";
    electronico1.precio = 500000;
    electronico1.cantidadInventario = 50;
    electronico1.descuento = 10;
    electronico1.garantia = 12;
    tienda.agregarElectronico(electronico1);

    Aseo aseo1;
    aseo1.nombre = "Jabon";
    aseo1.marca = "para mi";
    aseo1.precio = 5500;
    aseo1.cantidadInventario = 200;
    aseo1.descuento = 0;
    aseo1.material = "Aloe vera";
    tienda.agregarAseo(aseo1);

    int opcion;
    do {
        cout << "\nMenú Principal" << endl;
        cout << "1. Agregar productos" << endl;
        cout << "2. Modificar nombres, precios o % descuento" << endl;
        cout << "3. Realizar compra" << endl;
        cout << "4. Mostrar productos en inventario" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int tipoProducto;
                cout << "Seleccione el tipo de producto a agregar:" << endl;
                cout << "1. Comestible" << endl;
                cout << "2. Electronico" << endl;
                cout << "3. Aseo" << endl;
                cin >> tipoProducto;

                string nombre, marca;
                int precio, cantidadInventario, descuento;
                switch (tipoProducto) {
                    case 1: { // Comestible
                        Comestible comestible;
                        cout << "Ingrese el nombre del producto: ";
                        cin >> comestible.nombre;
                        cout << "Ingrese la marca del producto: ";
                        cin >> comestible.marca;
                        cout << "Ingrese el precio del producto: ";
                        cin >> comestible.precio;
                        cout << "Ingrese la cantidad en inventario del producto: ";
                        cin >> comestible.cantidadInventario;
                        cout << "Ingrese el descuento del producto (%): ";
                        cin >> comestible.descuento;
                        cout << "Ingrese la fecha de vencimiento del producto (MM/AAAA): ";
                        cin >> comestible.fechaVencimiento;
                        tienda.agregarComestible(comestible);
                        break;
                    }
                    case 2: { // Electrónico
                        Electronico electronico;
                        cout << "Ingrese el nombre del producto: ";
                        cin >> electronico.nombre;
                        cout << "Ingrese la marca del producto: ";
                        cin >> electronico.marca;
                        cout << "Ingrese el precio del producto: ";
                        cin >> electronico.precio;
                        cout << "Ingrese la cantidad en inventario del producto: ";
                        cin >> electronico.cantidadInventario;
                        cout << "Ingrese el descuento del producto (%): ";
                        cin >> electronico.descuento;
                        cout << "Ingrese la garantía del producto (en meses): ";
                        cin >> electronico.garantia;
                        tienda.agregarElectronico(electronico);
                        break;
                    }
                    case 3: { // Aseo
                        Aseo aseo;
                        cout << "Ingrese el nombre del producto: ";
                        cin >> aseo.nombre;
                        cout << "Ingrese la marca del producto: ";
                        cin >> aseo.marca;
                        cout << "Ingrese el precio del producto: ";
                        cin >> aseo.precio;
                        cout << "Ingrese la cantidad en inventario del producto: ";
                        cin >> aseo.cantidadInventario;
                        cout << "Ingrese el descuento del producto (%): ";
                        cin >> aseo.descuento;
                        cout << "Ingrese el material del producto: ";
                        cin >> aseo.material;
                        tienda.agregarAseo(aseo);
                        break;
                    }
                    default:
                        cout << "Tipo de producto invalido." << endl;
                        break;
                }
                break;
            }
            case 2: {
                int tipoProducto, indice;
                cout << "Seleccione el tipo de producto a modificar:" << endl;
                cout << "1. Comestible" << endl;
                cout << "2. Electrónico" << endl;
                cout << "3. Aseo" << endl;
                cin >> tipoProducto;
                cout << "Ingrese el indice del producto a modificar: ";
                cin >> indice;
                tienda.modificarProducto(tipoProducto, indice);
                break;
            }
            case 3:
                tienda.realizarCompra();
                break;
            case 4:
                tienda.mostrarProductos();
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Intentelo de nuevo." << endl;
                break;
        }
    } while (opcion != 5);

    return 0;
}*/

#include <iostream>
#include "productos.h"

using namespace std;
int main();
// Definición de la función productos()
void productos() {
    Tienda tienda;

    // Agregar algunos productos de ejemplo
    Comestible comestible1;
    comestible1.nombre = "Manzana";
    comestible1.marca = "Fruti-fruti";
    comestible1.precio = 100;
    comestible1.cantidadInventario = 100;
    comestible1.descuento = 5;
    comestible1.fechaVencimiento = "01/2025";
    tienda.agregarComestible(comestible1);

    Electronico electronico1;
    electronico1.nombre = "Smartphone";
    electronico1.marca = "TechCorp";
    electronico1.precio = 500000;
    electronico1.cantidadInventario = 50;
    electronico1.descuento = 10;
    electronico1.garantia = 12;
    tienda.agregarElectronico(electronico1);

    Aseo aseo1;
    aseo1.nombre = "Jabon";
    aseo1.marca = "para mi";
    aseo1.precio = 5500;
    aseo1.cantidadInventario = 200;
    aseo1.descuento = 0;
    aseo1.material = "Aloe vera";
    tienda.agregarAseo(aseo1);

    int opcion;
    do {
        cout << "\nMenú Principal" << endl;
        cout << "1. Agregar productos" << endl;
        cout << "2. Modificar nombres, precios o % descuento" << endl;
        cout << "3. Realizar compra" << endl;
        cout << "4. Mostrar productos en inventario" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int tipoProducto;
                cout << "Seleccione el tipo de producto a agregar:" << endl;
                cout << "1. Comestible" << endl;
                cout << "2. Electrónico" << endl;
                cout << "3. Aseo" << endl;
                cin >> tipoProducto;

                string nombre, marca;
                int precio, cantidadInventario, descuento;
                switch (tipoProducto) {
                    case 1: { // Comestible
                        Comestible comestible;
                        cout << "Ingrese el nombre del producto: ";
                        cin >> comestible.nombre;
                        cout << "Ingrese la marca del producto: ";
                        cin >> comestible.marca;
                        cout << "Ingrese el precio del producto: ";
                        cin >> comestible.precio;
                        cout << "Ingrese la cantidad en inventario del producto: ";
                        cin >> comestible.cantidadInventario;
                        cout << "Ingrese el descuento del producto (%): ";
                        cin >> comestible.descuento;
                        cout << "Ingrese la fecha de vencimiento del producto (MM/AAAA): ";
                        cin >> comestible.fechaVencimiento;
                        tienda.agregarComestible(comestible);
                        break;
                    }
                    case 2: { // Electrónico
                        Electronico electronico;
                        cout << "Ingrese el nombre del producto: ";
                        cin >> electronico.nombre;
                        cout << "Ingrese la marca del producto: ";
                        cin >> electronico.marca;
                        cout << "Ingrese el precio del producto: ";
                        cin >> electronico.precio;
                        cout << "Ingrese la cantidad en inventario del producto: ";
                        cin >> electronico.cantidadInventario;
                        cout << "Ingrese el descuento del producto (%): ";
                        cin >> electronico.descuento;
                        cout << "Ingrese la garantía del producto (en meses): ";
                        cin >> electronico.garantia;
                        tienda.agregarElectronico(electronico);
                        break;
                    }
                    case 3: { // Aseo
                        Aseo aseo;
                        cout << "Ingrese el nombre del producto: ";
                        cin >> aseo.nombre;
                        cout << "Ingrese la marca del producto: ";
                        cin >> aseo.marca;
                        cout << "Ingrese el precio del producto: ";
                        cin >> aseo.precio;
                        cout << "Ingrese la cantidad en inventario del producto: ";
                        cin >> aseo.cantidadInventario;
                        cout << "Ingrese el descuento del producto (%): ";
                        cin >> aseo.descuento;
                        cout << "Ingrese el material del producto: ";
                        cin >> aseo.material;
                        tienda.agregarAseo(aseo);
                        break;
                    }
                    default:
                        cout << "Tipo de producto invalido." << endl;
                        break;
                }
                break;
            }
            case 2: {
                int tipoProducto, indice;
                cout << "Seleccione el tipo de producto a modificar:" << endl;
                cout << "1. Comestible" << endl;
                cout << "2. Electrónico" << endl;
                cout << "3. Aseo" << endl;
                cin >> tipoProducto;
                cout << "Ingrese el indice del producto a modificar: ";
                cin >> indice;
                tienda.modificarProducto(tipoProducto, indice);
                break;
            }
            case 3:
                tienda.realizarCompra();
                break;
            case 4:
                tienda.mostrarProductos();
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Intentelo de nuevo." << endl;
                break;
        }
    } while (opcion != 5);
}




