#include <cstdlib>
#include <iostream>
using namespace std;
#include "Cola.h"

int main (int argc, char * arg[]){

	int Opc,Salir=1,j=6;
	ColaLineal cola;
	int n;
    do{
	system("Cls");
	cout<<"Seleccione una opcion del menu por favor"<<endl;
	cout<<"1- Insertar un Elemento a la cola"<<endl;
	cout<<"2- Eliminar un elemento de la cola"<<endl;
	cout<<"3- Mostrar los Elementos de la cima"<<endl;
	cout<<"4- Mostrar la cola de los elementos"<<endl;
	cout<<"5- Salir"<<endl;
	cin>>Opc;
	switch(Opc){
		case 1:
			cout<<"Insertar un Elemento"<<endl;
			cout<<""<<endl;
			cin>>n;
            cola.insertar(n);
			break;
		case 2:cout<<"Eliminar un Elemento"<<endl;
			cout<<cola.frenteCola()<<endl;
			cola.borrarCola();
			break;
		case 3:cout<<"Mostrar los elementos de la cima"<<endl;
			cout<<cola.frenteCola()<<endl;
			break;
		case 4:
			cout<<"Mostrar la Cola"<<endl;
			if(cola.colaVacia()==1)
			{
				cout<<"La cola esta vacia"<<endl;
			}
			else
			{
				cola.visualizar();
				cout<<endl;
			}
			break;
		case 5:
			cout<<"Si quiere salir del programa por favor presione cualquier numero"<<endl;
			default:
			cout<<"Error............ Por favor selecione un elemento que no pase del limite establecido"<<endl;
	}
	cout<<"¿Desea continuar con el programa?"<<endl;
		cout<<"Si es asi por favor presione el numero 1"<<endl;
		cout<<"No entonces por favor presione cualquier numero"<<endl;
		cin>>Salir;
	}while(Salir==1);
	getchar();
	system("pause");
	return 0;
}
