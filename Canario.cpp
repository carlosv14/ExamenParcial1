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

Canario::~Canario()
{
    //dtor
}
