#include <iostream>

using namespace std;

int main() {
    int x = 0;  // Posici�n inicial del punto
    int maxX = 50;  // Tama�o m�ximo de la pantalla

    while (true) {
        // Mover el punto a la posici�n (x)
        for (int i = 0; i < x; i++) {
            cout << " ";  // Espacios en blanco parael punto
        }
        cout << "O";  // El punto

        for (volatile int i = 0; i < 100000000; i++) {}  // Pausa (simulaci�n de espera)

        cout << "\r";  // Mover el cursor al inicio de la l�nea
        x++;

        // Si el punto llega al borde de la pantalla, volver al inicio
        if (x >= maxX) {
            x = 0;
        }
    }

    return 0;
}

