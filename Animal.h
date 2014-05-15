#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>
#include<fstream>
using namespace std;


class Animal
{
    public:
        string tipo;
        int edad;
        string nombre;
        Animal * sig;
        void imprimir();
        virtual void volar();
        virtual void rugir()=0;
        Animal();
        void guardarDatos();
        virtual ~Animal();
    protected:
    private:
};

#endif // ANIMAL_H
