#include "Canario.h"

Canario::Canario(int edad, string nombre)
{
   this->edad = edad;
   this->nombre= nombre;
   this->tipo = "Canario";
}

void Canario::rugir(){
cout<<"tweet, tweet"<<endl;

}

void Canario::volar(){
cout<<""<<endl;
}
Canario::~Canario()
{
    //dtor
}
