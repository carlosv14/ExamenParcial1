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



Lista::~Lista()
{
    //dtor
}

 Animal* Lista::buscar(string nom){
     if(inicio != NULL){
            if(inicio->nombre==nom){
                return inicio;
            }
            else{
                Animal*tmp = inicio;
                while(tmp->sig!= NULL){
                    if(tmp->sig->nombre==nom){
                        return tmp->sig;
                    }
                    else
                        tmp = tmp->sig;
                }

            }
        }

        return NULL;


   }
void Lista::insertar(Animal*animal , int posicion ){

    if(posicion == 0){

    Animal *tmp = animal;
    tmp->sig = inicio;
    inicio = tmp;
    return;
    }
     Animal*temp = inicio;

        for(int i= 1; i < posicion; i++){

        if(temp->sig == NULL){
        temp->sig = animal;
        return;
        }
            temp = temp->sig;
        }

        animal-> sig = temp -> sig;
        temp -> sig = animal;


}

void Lista::Borrar(string nom){
  if(inicio != NULL){
            if(inicio->nombre==nom){
                inicio = inicio->sig;
            }
            else{
                Animal*tmp = inicio;
                while(tmp->sig!= NULL){
                    if(tmp->sig->nombre==nom){
                        tmp->sig= tmp->sig->sig;
                    }
                    else
                        tmp = tmp->sig;
                }
            }
        }
}

double Lista::promedio(){
    if(inicio==NULL){
        return 0 ;
    }
    double suma=0;
    double cant=0;

    Animal *tmp =inicio;

    while(tmp!=NULL){
        suma+=tmp->edad;
        cant+=1;
        tmp= tmp->sig;
    }

    return (suma/cant);


}
