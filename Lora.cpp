#include "Lora.h"

Lora::Lora(int edad, string nombre)
{
   this->edad = edad;
   this->nombre=nombre;
   this->tipo = "Lora";
}
void Lora::rugir(){
cout<<"urra, urraa";

}
Lora::~Lora()
{
    //dtor
}
