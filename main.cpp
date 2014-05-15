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
<<<<<<< HEAD
=======
    l.Guardar();


>>>>>>> c84cd02faf85e2f515c4919e24fc7000ad8e060f
    return 0;
}

//Commit de Ahmed
//Commmit de  Alejandro
//Commit de Oscar
//Commit de Kelvin
