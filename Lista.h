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

        Animal* getAnimalMasViejo();
        Animal* getAnimalMasJoven();

        void leer();
        void Borrar(string nom);
        void insertar(Animal* animal , int posicion);
        Animal* buscar(string nombre);
        double promedio();

        virtual ~Lista();
    protected:
    private:
};

#endif // LISTA_H
