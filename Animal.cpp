#include "Animal.h"

Animal::Animal()
{
    this->sig = NULL;
}

Animal::~Animal()
{
    //dtor
}

void Animal:: imprimir(){
cout<<"Tipo: "<< tipo<<endl;
cout<<"Edad: "<< edad<<endl;
cout<<"Nombre: "<< nombre<<endl;

}

void Animal::volar(){
cout<<"Estoy volando!"<<endl;

}

void Animal :: guardarDatos(){
ofstream escribir("Animales",ios::app);
escribir<<this->tipo<<endl;
escribir<<this->edad<<endl;
escribir<<this->nombre<<endl;
escribir.close();
}
