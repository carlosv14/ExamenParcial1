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
    l.agregar(new Perro(5,"adios"));
    l.imprimir();
    l.Borrar("hola");
    l.imprimir();
    return 0;
}

//Commit de Ahmed
//Commmit de  Alejandro
//Commit de Oscar
