/* En este codigo, el inventario de la tienda está representado por la variable inventario, 
pero no se especifica explicitamente que tipo de producto se está descontando. 
En este caso, el enfoque del ejercicio es principalmente en el manejo de la cuenta corriente y la interacción entre el cliente y
la tienda para realizar una compra exitosa. El descontar un producto del inventario es solo una simulación de la acción de compra en la tienda, 
por lo que no se detalla qué producto específico se está vendiendo.*/


//#include "ejercicio3.h"

#include "ejercicio3.h"
#include <iostream>

void ejercicio3(); 

// inicializa los atributos
CuentaCorriente::CuentaCorriente(string nom, string ape, string dir, string tele, double sald, string id, string clav) {
    nombre = nom;
    apellido = ape;
    direccion = dir;
    telefono = tele;
    saldo = sald;
    identificacion = id;
    clave = clav;
}

void CuentaCorriente::consultar() {
    cout << "Su nombre es: " << getNombre() << " " << getApellido() << endl;
    cout << "Su direccion es: " << getDireccion() << endl;
    cout << "Su telefono es: " << getTelefono() << endl;
    cout << "Su saldo es: " << saldo << endl;
}

void CuentaCorriente::retirar(string clave_ingresada) {
    if (clave_ingresada == clave) {
        double total;
        cout << "Cuanto quiere retirar: ";
        cin >> total;
        if (saldo < total) {
            cout << "Saldo insuficiente" << endl;
        } else {
            saldo = saldo - total;
            cout << "Retiro exitoso" << endl;
        }
    } else {
        cout << "Clave incorrecta. No se puede retirar dinero." << endl;
    }
}

void CuentaCorriente::ingresar(string clave_ingresada) {
    if (clave_ingresada == clave) {
        double total;
        cout << "Valor a consignar: ";
        cin >> total;
        if (total <= 0) {
            cout << "Ingreso inválido" << endl;
            return;
        }
        saldo = saldo + total;
        cout << "Consignacion exitosa" << endl;
    } else {
        cout << "Clave incorrecta. No se puede ingresar dinero." << endl;
    }
}

void CuentaCorriente::sin_saldo() {
    if (saldo <= 0) {
        cout << "Fondos insuficientes" << endl;
    } else {
        cout << "Sus fondos son suficientes" << endl;
    }
}

double CuentaCorriente::obtenerSaldo() const {
    return saldo;
}

void CuentaCorriente::modificarSaldo(double nuevo_saldo) {
    saldo = nuevo_saldo;
}

class Tienda {
private:
    int inventario;

public:
    Tienda(int inv): inventario(inv) {}

    void realizarCompra(CuentaCorriente& cuenta) {
        string clave_ingresada;
        double total;
        cout << "Ingrese su clave para realizar la compra: ";
        cin >> clave_ingresada;

        if (clave_ingresada == cuenta.getClave()) {
            cout << "Ingrese el monto total de la compra: ";
            cin >> total;

            if (total <= cuenta.obtenerSaldo()) {
                cuenta.modificarSaldo(cuenta.obtenerSaldo() - total);
                inventario -= 1;
                cout << "Compra realizada con exito. Saldo restante: " << cuenta.obtenerSaldo() << endl;
                cout << "Inventario restante en la tienda: " << inventario << endl; // Aquí mostramos el inventario restante
            } else {
                cout << "Saldo insuficiente para realizar la compra." << endl;
            }
        } else {
            cout << "Clave incorrecta. No se puede realizar la compra." << endl;
        }
    }
};

int main() {
    char op;
    string nombre, apellido, direccion, telefono, identificacion, clave;
    double saldo_inicial;

    cout << "Elija 1 para ingresar los datos de su cuenta." << endl;
    cout << "Elija 2 para crear una cuenta." << endl;
    cout << "Elegir numero: ";
    cin >> op;

    CuentaCorriente cuenta("NombreDefinido", "ApellidoDefinido", "DireccionDefinida", "TelefonoDefinido", 0.0, "IDDefinido", "12345"); // Cuenta predeterminada
    Tienda tienda(10); // Inventario predeterminado

    switch (op) {
    case '1':
        cout << "Ingrese el nombre: ";
        cin >> nombre;
        cuenta.setNombre(nombre);

        cout << "Ingrese el apellido: ";
        cin >> apellido;
        cuenta.setApellido(apellido);

        cout << "Ingrese la direccion: ";
        cin >> direccion;
        cuenta.setDireccion(direccion);

        cout << "Ingrese el telefono: ";
        cin >> telefono;
        cuenta.setTelefono(telefono);

        cout << "Ingrese el numero de identificacion: ";
        cin >> identificacion;
        cuenta.setIdentificacion(identificacion);

        cout << "Ingrese la clave: ";
        cin >> clave;
        cuenta.setClave(clave);

        cout << "Ingrese el saldo inicial: ";
        cin >> saldo_inicial;
        cuenta.modificarSaldo(saldo_inicial); // Se modifica el saldo con el valor inicial
        break;

    case '2':
        //  datos predeterminados  establecidos
        break;

    default:
        cout << "Opcion no valida.." << endl;
        return 0;
    }

    tienda.realizarCompra(cuenta);

    return 0;
}


