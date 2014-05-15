#include "Lista.h"

Lista::Lista()
{
   inicio =NULL;
}

void Lista::agregar(Animal * n){
if(inicio!=NULL){
Animal *temp;
for(temp = inicio; temp->sig!=NULL ; temp=temp->sig);

    temp->sig=n;

}else{
    inicio = n;

}

}

void Lista:: imprimir(){
if(inicio!=NULL){
for(Animal * temp = inicio; temp!=NULL; temp = temp->sig)
{
    temp->imprimir();
    cout<<"************"<<endl;
}
}
else{
cout<<"Lista Vacia"<<endl;

}
}
void Lista:: Guardar(){
for(Animal * temp = inicio; temp!=NULL; temp = temp->sig)
{
    temp->guardarDatos();

}

}

void Lista::leer(){
ifstream leo("Animales");
string var1;
int var2;
string var3;
Lista l;
leo>>var1;
leo>>var2;
leo>>var3;
if(var1 == "Perro"){
 l.agregar(new Perro(var2,var3));
}else if(var1 == "Canario"){
l.agregar(new Canario(var2,var3));
}else{
l.agregar(new Lora(var2,var3));
}
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
Lista::~Lista()
{
    //dtor
}
