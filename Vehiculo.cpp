
#include <iostream>
#include <string>
using namespace std;

class Vehiculo {
protected:
    string numeroPlaca;
    string color;
    string marca;
    double velocimetro;

public:
    Vehiculo(string numeroPlaca, string color, string marca, double velocimetro) {
        this->numeroPlaca = numeroPlaca;
        this->color = color;
        this->marca = marca;
        this->velocimetro = velocimetro;
    }

  
    void mostrarDatos() {
        cout << "Placa: " << numeroPlaca << endl;
        cout << "Color: " << color << endl;
        cout << "Marca: " << marca << endl;
        cout << "Velocimetro: " << velocimetro << " km/h" << endl;
    }

    void cambiarVelocidad(double nuevaVelocidad) {
        if (nuevaVelocidad < 0) {
            cout << "La velocidad no puede ser negativa." << endl;
        } else {
            velocimetro = nuevaVelocidad;
        }
    }
};

class Automovil : public Vehiculo {
private:
    int cantidadPuertas;
    int cantidadPasajeros;

public:
    
    Automovil(string numeroPlaca, string color, string marca, double velocimetro,
              int cantidadPuertas, int cantidadPasajeros)
        : Vehiculo(numeroPlaca, color, marca, velocimetro) {
        this->cantidadPuertas = cantidadPuertas;
        this->cantidadPasajeros = cantidadPasajeros;
    }


    void mostrarAutomovil() {
        cout << " Automovil " << endl;
        mostrarDatos();
        cout << "Puertas: " << cantidadPuertas << endl;
        cout << "Pasajeros: " << cantidadPasajeros << endl;
        cout << endl;
    }


    void subirPasajeros(int cantidad) {
        if (cantidad > 0) {
            cantidadPasajeros += cantidad;
        }
    }
    void bajarPasajeros(int cantidad) {
        if (cantidad > cantidadPasajeros) {
            cout << "No hay tantos pasajeros a bordo." << endl;
        } else if (cantidad > 0) {
            cantidadPasajeros -= cantidad;
        }
    }
};


class Camion : public Vehiculo {
private:
    double carga; 

public:
    Camion(string numeroPlaca, string color, string marca, double velocimetro,
           double carga)
        : Vehiculo(numeroPlaca, color, marca, velocimetro) {
        this->carga = carga;
    }

    void mostrarCamion() {
        cout << "=== Camion ===" << endl;
        mostrarDatos();
        cout << "Carga: " << carga << " toneladas" << endl;
        cout << endl;
    }
    void cambiarCarga(double nuevaCarga) {
        if (nuevaCarga < 0) {
            cout << "La carga no puede ser negativa." << endl;
        } else {
            carga = nuevaCarga;
        }
    }
};

int main() {
   

   Automovil auto1("ABC-123", "Rojo", "Toyota", 0, 4, 2);
    Camion camion1("XYZ-789", "Blanco", "Volvo", 0, 10);

    auto1.mostrarAutomovil();
    camion1.mostrarCamion();

   
    auto1.cambiarVelocidad(60);
    auto1.subirPasajeros(2);
    auto1.bajarPasajeros(1);

    camion1.cambiarVelocidad(45);
    camion1.cambiarCarga(15);

   
    auto1.mostrarAutomovil();
    camion1.mostrarCamion();

    return 0;
}

