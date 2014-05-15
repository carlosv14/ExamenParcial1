#ifndef LISTA_H
#define LISTA_H
#include "Animal.h"
#include <fstream>
#include "Perro.h"
#include "Canario.h"
#include "Lora.h"
class Lista
{
    public:
        Animal * inicio;
        Lista();
        void agregar(Animal* n);
        void imprimir();
        void Guardar();
<<<<<<< HEAD
        void leer();
        Animal* buscar(string nombre);
=======

        void leer();
        void Borrar(string nom);

        void insertar(Animal* animal , int posicion);

>>>>>>> de8834c85b438946e1c6bdbb1c6202fd23badc5c
        virtual ~Lista();
    protected:
    private:
};

#endif // LISTA_H
