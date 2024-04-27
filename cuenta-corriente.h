#ifndef CUENTA_CORRIENTE_H
#define CUENTA_CORRIENTE_H

#include <iostream>
#include <string>

using namespace std;

class C_c {
private:
    string nombre;
    string apellido;
    string direccion;
    string tel;
    double sal;
    string identificacion;
    string clave;

public:
    // Constructor con parámetros
    C_c(string nom, string ape, string dir, string tele, double sald, string id, string clav);

    void consultar();
    void retirar(string clave_ingresada);
    void ingresar(string clave_ingresada);
    void sin_saldo();

    // Métodos set y get
    void setNombre(string nom) { nombre = nom; }
    string getNombre() const { return nombre; }

    void setApellido(string ape) { apellido = ape; }
    string getApellido() const { return apellido; }

    void setDireccion(string dir) { direccion = dir; }
    string getDireccion() const { return direccion; }

    void setTelefono(string tele) { tel = tele; }
    string getTelefono() const { return tel; }

    void setIdentificacion(string id) { identificacion = id; }
    string getIdentificacion() const { return identificacion; }

    void setClave(string clav) { clave = clav; }
    string getClave() const { return clave; }
};

#endif // CUENTA_CORRIENTE_H

