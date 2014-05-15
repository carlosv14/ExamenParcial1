#ifndef LISTA_H
#define LISTA_H
#include "Animal.h"
#include "fstream"
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
        void leer();
        void Borrar(string nom);
        virtual ~Lista();
    protected:
    private:
};

#endif // LISTA_H
