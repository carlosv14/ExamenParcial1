#include <iostream>
#include "Lista.h"
#include "Perro.h"
#include "Canario.h"
#include "Lora.h"
using namespace std;

int main()
{
    Lista l;
<<<<<<< HEAD
    l.agregar(new Perro(8,"hola"));
    l.agregar(new Perro(5,"dogui"));
    l.imprimir();
    cout<< l.buscar("hola")->edad;
    l.Guardar();
=======
    l.agregar(new Perro(5,"hola"));
    l.agregar(new Perro(5,"adios"));
    l.imprimir();
    l.Borrar("hola");
    l.imprimir();
>>>>>>> de8834c85b438946e1c6bdbb1c6202fd23badc5c

    return 0;
}

<<<<<<< HEAD
=======
//Commit de Ahmed
//Commmit de  Alejandro
//Commit de Oscar
//Commit de Kelvin
>>>>>>> de8834c85b438946e1c6bdbb1c6202fd23badc5c
