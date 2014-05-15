#include "Perro.h"

Perro::Perro(int edad, string nombre)
{
    this->edad = edad;
    this->nombre = nombre;
    this->tipo = "Perro";
}


void Perro::rugir(){

cout<< "wuff, wuff"<<endl;
}

void Perro::volar(){
cout<<"No puedo Volar!"<<endl;
}

Perro::~Perro()
{
    //dtor
}
