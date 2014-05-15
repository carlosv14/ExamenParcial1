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
    l.agregar(new Lora(52, "Juan"));
    l.imprimir();
    l.insertar(new Canario(50, "Manuel"),0);
    l.imprimir();

    return 0;
}

