#ifndef PERRO_H
#define PERRO_H
#include<iostream>
#include "Animal.h"
using namespace std;

class Perro : public Animal
{
    public:
        Perro(int edad, string nombre);
        void volar();
        void rugir();
        virtual ~Perro();
    protected:
    private:
};

#endif // PERRO_H
