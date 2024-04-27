#ifndef PRODUCTOS_H
#define PRODUCTOS_H

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
    // Declaración de la función productos
void productos();
};


#endif // PRODUCTOS_H

