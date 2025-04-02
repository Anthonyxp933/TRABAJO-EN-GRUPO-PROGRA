#include <iostream>
using namespace std;

void mostrarMenu();
void consultarSaldo(double saldo);
double depositar(double saldo);
double retirar(double saldo);

int main() {
    double saldo = 1000.0;  // Saldo inicial
    int opcion;

    do {
        mostrarMenu();
        cout << "Seleccione una opci�n: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                consultarSaldo(saldo);
                break;
            case 2:
                saldo = depositar(saldo);
                break;
            case 3:
                saldo = retirar(saldo);
                break;
            case 4:
                cout << "Gracias por usar el cajero autom�tico. �Hasta luego!" << endl;
                break;
            default:
                cout << "Opci�n no v�lida, intente de nuevo." << endl;
        }
    } while (opcion != 4);

    return 0;
}

// Funci�n para mostrar el men�
void mostrarMenu() {
    cout << "\n=== Cajero Autom�tico ===" << endl;
    cout << "1. Consultar saldo" << endl;
    cout << "2. Depositar dinero" << endl;
    cout << "3. Retirar dinero" << endl;
    cout << "4. Salir" << endl;
}

void consultarSaldo(double saldo) {
    cout << "Saldo actual: $" << saldo << endl;
}

double depositar(double saldo) {
    double deposito;
    cout << "Ingrese la cantidad a depositar: $";
    cin >> deposito;
    if (deposito > 0) {
        saldo += deposito;
        cout << "Dep�sito exitoso. Nuevo saldo: $" << saldo << endl;
    } else {
        cout << "Cantidad inv�lida." << endl;
    }
    return saldo;
}

// Funci�n para retirar dinero
double retirar(double saldo) {
    double retiro;
    cout << "Ingrese la cantidad a retirar: $";
    cin >> retiro;
    if (retiro > 0 && retiro <= saldo) {
        saldo -= retiro;
        cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
    } else {
        cout << "Fondos insuficientes o cantidad inv�lida." << endl;
    }
    return saldo;
}

