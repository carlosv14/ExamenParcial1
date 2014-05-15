#include <iostream>
#include "Lista.h"
#include "Perro.h"
#include "Canario.h"
#include "Lora.h"
using namespace std;

int main()
{
    Lista l;
    l.agregar(new Perro(5,"hola"));
    l.imprimir();
    l.Guardar();


    return 0;
}

//Commit de Ahmed
//Commmit de  Alejandro
//Commit de Oscar
//Commit de Kelvin
