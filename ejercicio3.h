#include <iostream>
#include <string>
#ifndef EJERCICIO3_H
#define EJERCICIO3_H
using namespace std;

class CuentaCorriente {
private:
    string nombre;
    string apellido;
    string direccion;
    string telefono;
    double saldo;
    string identificacion;
    string clave;

public:
    // Constructor con parámetros
    CuentaCorriente(string nom, string ape, string dir, string tele, double sald, string id, string clav);

    void consultar();
    void retirar(string clave_ingresada);
    void ingresar(string clave_ingresada);
    void sin_saldo();
    double obtenerSaldo() const; // Método para obtener el saldo
    void modificarSaldo(double nuevo_saldo); // Método para modificar el saldo

    // Métodos set y get
    void setNombre(string nom) { nombre = nom; }
    string getNombre() const { return nombre; }

    void setApellido(string ape) { apellido = ape; }
    string getApellido() const { return apellido; }

    void setDireccion(string dir) { direccion = dir; }
    string getDireccion() const { return direccion; }

    void setTelefono(string tele) { telefono = tele; }
    string getTelefono() const { return telefono; }

    void setIdentificacion(string id) { identificacion = id; }
    string getIdentificacion() const { return identificacion; }

    void setClave(string clav) { clave = clav; }
    string getClave() const { return clave; }
};
#endif // EJERCICIO3_H
