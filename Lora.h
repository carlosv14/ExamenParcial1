#ifndef LORA_H
#define LORA_H
#include<iostream>
#include "Animal.h"
using namespace std;

class Lora : public Animal
{
    public:
        void volar();
        void rugir();

        Lora(int edad, string nombre);
        virtual ~Lora();
    protected:
    private:
};

#endif // LORA_H
