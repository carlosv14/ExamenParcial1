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
    l.agregar(new Perro(8,"valemadre"));
    l.insertar(new Lora(4,"blu"),9);




    l.imprimir();

    return 0;
}

