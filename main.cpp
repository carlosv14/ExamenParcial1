#include <iostream>
#include "Lista.h"
#include "Perro.h"
#include "Canario.h"
#include "Lora.h"
using namespace std;

int main()
{
    Lista l;
    l.agregar(new Perro(8,"hola"));
    l.agregar(new Perro(5,"dogui"));
    l.imprimir();
    cout<< l.buscar("hola")->edad;
    l.Guardar();

    return 0;
}

