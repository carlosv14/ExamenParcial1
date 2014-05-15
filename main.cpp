#include <iostream>
#include "Lista.h"
#include "Perro.h"
#include "Canario.h"
#include "Lora.h"
using namespace std;

int main()
{
    Lista l;
    l.agregar(new Perro(200,"hola"));
    l.agregar(new Canario(1,"tweetie"));
    l.agregar(new Lora(55,"Paco"));
    l.insertar(new Lora(15,"Lola"),0);
    l.imprimir();

    return 0;
}

//Commit de Ahmed
//Commmit de  Alejandro
