#include "cuenta-corriente.h"

// inicializa los atributos
C_c::C_c(string nom, string ape, string dir, string tele, double sald, string id, string clav) {
    nombre = nom;
    apellido = ape;
    direccion = dir;
    tel = tele;
    sal = sald;
    identificacion = id;
    clave = clav;
}

void C_c::consultar() {
    cout << "Su nombre es: " << getNombre() << " " << getApellido() << endl;
    cout << "Su direccion es: " << getDireccion() << endl;
    cout << "Su telefono es: " << getTelefono() << endl;
    cout << "Su saldo es: " << sal << endl;
}

void C_c::retirar(string clave_ingresada) {
    if (clave_ingresada == clave) {
        double total;
        cout << "Cuánto quiere retirar: ";
        cin >> total;
        if (sal < total) {
            cout << "Saldo insuficiente" << endl;
        } else {
            sal = sal - total;
            cout << "Retiro exitoso" << endl;
        }
    } else {
        cout << "Clave incorrecta. No se puede retirar dinero." << endl;
    }
}

void C_c::ingresar(string clave_ingresada) {
    if (clave_ingresada == clave) {
        double total;
        cout << "Valor a consignar: ";
        cin >> total;
        if (total <= 0) {
            cout << "Ingreso invalido" << endl;
            return;
        }
        sal = sal + total;
        cout << "Consignacion exitosa" << endl;
    } else {
        cout << "Clave incorrecta. No se puede ingresar dinero." << endl;
    }
}

void C_c::sin_saldo() {
    if (sal <= 0) {
        cout << "Fondos insuficientes" << endl;
    } else {
        cout << "Sus fondos son suficientes" << endl;
    }
}

