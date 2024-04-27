#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Producto {
public:
    string nombre;
    string marca;
    int precio;
    int cantidadInventario;
    int descuento;
};

class Comestible : public Producto {
public:
    string fechaVencimiento;
};

class Electronico : public Producto {
public:
    int garantia; // en meses
};

class Aseo : public Producto {
public:
    string material;
};

class Tienda {
private:
    vector<Comestible> comestibles;
    vector<Electronico> electronicos;
    vector<Aseo> aseos;

public:
    void agregarComestible(const Comestible& producto) {
        comestibles.push_back(producto);
    }

    void agregarElectronico(const Electronico& producto) {
        electronicos.push_back(producto);
    }

    void agregarAseo(const Aseo& producto) {
        aseos.push_back(producto);
    }

    void mostrarProductos() const {
        cout << "Productos comestibles:" << endl;
        for (vector<Comestible>::const_iterator it = comestibles.begin(); it != comestibles.end(); ++it) {
            cout << "Nombre: " << it->nombre << ", Marca: " << it->marca << ", Precio: " << it->precio << ", Cantidad en inventario: " << it->cantidadInventario << endl;
        }

        cout << "\nProductos electronicos:" << endl;
        for (vector<Electronico>::const_iterator it = electronicos.begin(); it != electronicos.end(); ++it) {
            cout << "Nombre: " << it->nombre << ", Marca: " << it->marca << ", Precio: " << it->precio << ", Cantidad en inventario: " << it->cantidadInventario << endl;
        }

        cout << "\nProductos de aseo:" << endl;
        for (vector<Aseo>::const_iterator it = aseos.begin(); it != aseos.end(); ++it) {
            cout << "Nombre: " << it->nombre << ", Marca: " << it->marca << ", Precio: " << it->precio << ", Cantidad en inventario: " << it->cantidadInventario << endl;
        }
    }

    void modificarProducto(int tipo, int indice) {
        if (tipo == 1 && indice >= 0 && indice < comestibles.size()) {
            // Modificar producto comestible
            Comestible& comestible = comestibles[indice];
            std::cout << "Ingrese el nuevo nombre del producto: ";
            std::cin >> comestible.nombre;
            std::cout << "Ingrese la nueva marca del producto: ";
            std::cin >> comestible.marca;
            std::cout << "Ingrese el nuevo precio del producto: ";
            std::cin >> comestible.precio;
            std::cout << "Ingrese la nueva cantidad en inventario del producto: ";
            std::cin >> comestible.cantidadInventario;
            std::cout << "Ingrese el nuevo descuento del producto (%): ";
            std::cin >> comestible.descuento;
            std::cout << "Ingrese la nueva fecha de vencimiento del producto (MM/AAAA): ";
            std::cin >> comestible.fechaVencimiento;
        } else if (tipo == 2 && indice >= 0 && indice < electronicos.size()) {
            // Modificar producto electrónico
            Electronico& electronico = electronicos[indice];
            std::cout << "Ingrese el nuevo nombre del producto: ";
            std::cin >> electronico.nombre;
            std::cout << "Ingrese la nueva marca del producto: ";
            std::cin >> electronico.marca;
            std::cout << "Ingrese el nuevo precio del producto: ";
            std::cin >> electronico.precio;
            std::cout << "Ingrese la nueva cantidad en inventario del producto: ";
            std::cin >> electronico.cantidadInventario;
            std::cout << "Ingrese el nuevo descuento del producto (%): ";
            std::cin >> electronico.descuento;
            std::cout << "Ingrese la nueva garantía del producto (en meses): ";
            std::cin >> electronico.garantia;
        } else if (tipo == 3 && indice >= 0 && indice < aseos.size()) {
            // Modificar producto de aseo
            Aseo& aseo = aseos[indice];
            std::cout << "Ingrese el nuevo nombre del producto: ";
            std::cin >> aseo.nombre;
            std::cout << "Ingrese la nueva marca del producto: ";
            std::cin >> aseo.marca;
            std::cout << "Ingrese el nuevo precio del producto: ";
            std::cin >> aseo.precio;
            std::cout << "Ingrese la nueva cantidad en inventario del producto: ";
            std::cin >> aseo.cantidadInventario;
            std::cout << "Ingrese el nuevo descuento del producto (%): ";
            std::cin >> aseo.descuento;
            std::cout << "Ingrese el nuevo material del producto: ";
            std::cin >> aseo.material;
        } else {
            std::cout << "Tipo de producto o indice invalido." << std::endl;
        }
    
    }

    void realizarCompra() {
        int tipo, indice, cantidad;
        std::cout << "Ingrese el tipo de producto que desea comprar (1: Comestible, 2: Electrónico, 3: Aseo): ";
        std::cin >> tipo;
        std::cout << "Ingrese el indice del producto que desea comprar: ";
        std::cin >> indice;
        std::cout << "Ingrese la cantidad que desea comprar: ";
        std::cin >> cantidad;

        if (tipo == 1 && indice >= 0 && indice < comestibles.size()) {
            Comestible& comestible = comestibles[indice];
            if (comestible.cantidadInventario >= cantidad) {
                int precioTotal = comestible.precio * cantidad * (100 - comestible.descuento) / 100;
                comestible.cantidadInventario -= cantidad;
                std::cout << "Compra realizada correctamente. Precio total: " << precioTotal << std::endl;
            } else {
                std::cout << "No hay suficiente inventario para realizar la compra." << std::endl;
            }
        } else if (tipo == 2 && indice >= 0 && indice < electronicos.size()) {
            Electronico& electronico = electronicos[indice];
            if (electronico.cantidadInventario >= cantidad) {
                int precioTotal = electronico.precio * cantidad * (100 - electronico.descuento) / 100;
                electronico.cantidadInventario -= cantidad;
                std::cout << "Compra realizada correctamente. Precio total: " << precioTotal << std::endl;
            } else {
                std::cout << "No hay suficiente inventario para realizar la compra." << std::endl;
            }
        } else if (tipo == 3 && indice >= 0 && indice < aseos.size()) {
            Aseo& aseo = aseos[indice];
            if (aseo.cantidadInventario >= cantidad) {
                int precioTotal = aseo.precio * cantidad * (100 - aseo.descuento) / 100;
                aseo.cantidadInventario -= cantidad;
                std::cout << "Compra realizada correctamente. Precio total: " << precioTotal << std::endl;
            } else {
                std::cout << "No hay suficiente inventario para realizar la compra." << std::endl;
            }
        } else {
            std::cout << "Tipo de producto o indice invalido." << std::endl;
        }
    }
};

    


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
}



