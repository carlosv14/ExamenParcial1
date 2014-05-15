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

 Animal* Lista::buscar(string nombre){

    if (inicio == NULL)
        {
            return NULL;
        }
     Animal* temp = inicio;

     while(temp != NULL){
        if(temp-> nombre == nombre){
            return temp;
        }
            temp = temp ->sig;
            cout<< "Animal no Existe";
            return NULL;
     }
   }
void Lista::insertar(Animal*animal , int posicion ){

     Animal*temp = inicio;
        for(int i=0; i<posicion; i++){

            temp = temp->sig;
        }

        animal->sig = temp->sig;
        temp->sig = animal;


}
Lista::~Lista()
{
    //dtor
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
