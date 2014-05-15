#ifndef CANARIO_H
#define CANARIO_H
#include<iostream>
#include "Animal.h"

using namespace std;

class Canario : public Animal
{
    public:
        void rugir();
        Canario(int edad, string nombre);
        virtual ~Canario();
    protected:
    private:
};

#endif // CANARIO_H
