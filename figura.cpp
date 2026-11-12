#include <iostream>
#include <string>
using namespace std;
class Figura {
protected:
    string color;

public:
    Figura(string c) {
        color = c;
    }
};

class Circulo : public Figura {
private:
    double radio;

public:

    Circulo(string c, double r) : Figura(c) {
        radio = r;
    }

    double calcularArea() {
        return 3.1416 * radio * radio;
    }

    double calcularPerimetro() {
        return 2 * 3.1416 * radio;
    }

    void mostrar() {
        cout << "--- Circulo ---" << endl;
        cout << "Color: " << color << endl;
        cout << "Radio: " << radio << endl;
        cout << "Area: " << calcularArea() << endl;
        cout << "Perimetro: " << calcularPerimetro() << endl;
        cout << endl;
    }
};

class Rectangulo : public Figura {
private:
    double base;
    double altura;

public:
    Rectangulo(string c, double b, double a) : Figura(c) {
        base = b;
        altura = a;
    }
    double calcularArea() {
        return base * altura;
    }

    void mostrar() {
        cout << "--- Rectangulo ---" << endl;
        cout << "Color: " << color << endl;
        cout << "Base: " << base << endl;
        cout << "Altura: " << altura << endl;
        cout << "Area: " << calcularArea() << endl;
        cout << endl;
    }
};

class Triangulo : public Figura {
private:
    double base;
    double altura;
    string tipo;   

public:
    Triangulo(string c, double b, double a, string t) : Figura(c) {
        base = b;
        altura = a;
        tipo = t;
    }

    double calcularArea() {
        return (base * altura) / 2;
    }

    void mostrar() {
        cout << "--- Triangulo ---" << endl;
        cout << "Color: " << color << endl;
        cout << "Base: " << base << endl;
        cout << "Altura: " << altura << endl;
        cout << "Tipo: " << tipo << endl;
        cout << "Area: " << calcularArea() << endl;
        cout << endl;
    }
};

int main() {
    Circulo circulo("Rojo", 5);
    Rectangulo rectangulo("Azul", 4, 6);
    Triangulo triangulo("Verde", 3, 8, "Escaleno");

    circulo.mostrar();
    rectangulo.mostrar();
    triangulo.mostrar();

    return 0;
}
