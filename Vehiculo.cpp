
#include<iostream>
#include<string>
using namespace std;


//Clase base Vehiculo ----------------------------------------------
class Vehiculo{
  public:
   string placa;
   float color;
   string marca;
   float velocimetro;
   void mostrarDatos();
   void cambiarCarga(float v);
   float getVelocidad(){
     return velocimetro;
   }    
   Vehiculo(string p, float c, string m, float v);
};

  Vehiculo::Vehiculo(string p, float c, string m, float v){
  placa = p;
  color = c;
  marca = m;
  velocimetro = v;
 
}
void Vehiculo::mostrarDatos(){
  cout<<"Placa: "<<placa<<endl;
  cout<<"Color: "<<color<<endl;
  cout<<"Marca: "<<marca<<endl;
  cout<<"Velocimetro: "<<velocimetro<<endl;
}
void Vehiculo::cambiarCarga(float v){
  velocimetro = v;
}
class automovil:public Vehiculo{
  public:
   int numPuertas;
   string tipoCombustible;
};
class Camion:public Vehiculo{
  public:
   int numEjes;
   float capacidadCarga;
};
int main(){
  Vehiculo v1("82183", 255, "Toyota", 120);
  v1.mostrarDatos();
  v1.cambiarCarga(150);
  v1.mostrarDatos();


}
