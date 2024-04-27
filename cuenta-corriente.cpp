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
int main() {
    char op;
    string nombre, apellido, direccion, telefono, identificacion, clave;
    double saldo_inicial;

    cout << "Elija 1 para ingresar los datos de su cuenta." << endl;
    cout << "Elija 2 para crear una cuenta." << endl;
    cout << "Elegir numero: ";
    cin >> op;

    C_c cuenta("NombreDefinido", "ApellidoDefinido", "DireccionDefinida", "TelefonoDefinido", 0.0, "IDDefinido", "12345"); // Cuenta predeterminada

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
        cuenta.ingresar(clave); // No se pasa ningún argumento
        break;

    case '2':
    cuenta.setNombre("NombrePredeterminado");
    cuenta.setApellido("ApellidoPredeterminado");
    cuenta.setDireccion("DireccionPredeterminada");
    cuenta.setTelefono("TelefonoPredeterminado");
    cuenta.setIdentificacion("IdentificacionPredeterminada");
    cuenta.setClave("12345"); // Clave predeterminada
    cout << "Datos predeterminados establecidos" << endl;

        break;

    default:
        cout << "Opcion no valida.." << endl;
        return 0;
    }

    do {
        cout << endl << "Menu de opciones:" << endl;
        cout << "1. Consultar datos de la cuenta." << endl;
        cout << "2. Retirar." << endl;
        cout << "3. Consignar." << endl;
        cout << "4. Verificar saldo en rojo." << endl;
        cout << "5. Modificar clave." << endl;
        cout << "6. Salir." << endl;
        cout << "Seleccione una opcion: ";
        cin >> op;
        
        string id;

        switch (op) {
        case '1':
            cuenta.consultar();
            break;

        case '2':
            cout << "Ingrese su clave: ";
            cin >> clave;
            cuenta.retirar(clave);
            break;

        case '3':
            cout << "Ingrese su clave: ";
            cin >> clave;
            cuenta.ingresar(clave);
            break;

        case '4':
            cuenta.sin_saldo();
            break;

        case '5':
            
            cout << "Ingrese su numero de identificacion: ";
            cin >> id;
            if (id == cuenta.getIdentificacion()) {
                string clave_anterior;
                cout << "Ingrese su clave anterior: ";
                cin >> clave_anterior;
                if (clave_anterior == cuenta.getClave()) {
                    cout << "Ingrese su nueva clave: ";
                    cin >> clave;
                    cuenta.setClave(clave);
                    cout << "Clave modificada exitosamente" << endl;
                } else {
                    cout << "Clave incorrecta. No se puede modificar la clave." << endl;
                }
            } else {
                cout << "Número de identificacion incorrecto. No se puede modificar la clave." << endl;
            }
            break;

        case '6':
            cout << "Hasta luego" << endl;
            break;

        default:
            cout << "Opcion no valida." << endl;
        }
    } while (op != '6');

    return 0;
}


