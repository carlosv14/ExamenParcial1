#include "Lista.h"

Lista::Lista()
{
    inicio =NULL;
}

void Lista::agregar(Animal * n)
{
    if(inicio!=NULL)
    {
        Animal *temp;
        for(temp = inicio; temp->sig!=NULL ; temp=temp->sig);

        temp->sig=n;

    }
    else
    {
        inicio = n;

    }

}

void Lista:: imprimir()
{
    if(inicio!=NULL)
    {
        for(Animal * temp = inicio; temp!=NULL; temp = temp->sig)
        {
            temp->imprimir();
            cout<<"************"<<endl;
        }
    }
    else
    {
        cout<<"Lista Vacia"<<endl;

    }
}
void Lista:: Guardar()
{
    for(Animal * temp = inicio; temp!=NULL; temp = temp->sig)
    {
        temp->guardarDatos();

    }

}

Animal* Lista::getAnimalMasViejo()
{
    if(inicio == NULL){
    return NULL;
    }
    Animal * tmp = inicio;
    Animal* n = tmp;
    while(tmp!=NULL){
        if(tmp->edad>n->edad)
{
    n = tmp;
}
tmp = tmp->sig;
    }
    return n;

}
Animal* Lista::getAnimalMasJoven()
{
    if(inicio == NULL){
    return NULL;
    }
    Animal * tmp = inicio;
    Animal* n = tmp;
    while(tmp!=NULL){
        if(tmp->edad<n->edad)
{
    n = tmp;
}
tmp = tmp->sig;
    }
    return n;

}
void Lista ::insertar(Animal *n, int pos){
        Animal*temp = inicio;
        Animal* np = NULL;
        if(pos==0){
          np = inicio;
          inicio = n;
          inicio->sig =np;

        }
        for(int i=0; i<pos-1;i++)
        {
            temp = temp->sig;

        }
        n->sig = temp->sig;
        temp->sig=n;

    }


Lista::~Lista()
{
    //dtor
}
