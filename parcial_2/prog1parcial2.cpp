/*Programa # 1
Escribir un programa que almacene en un array los nombres y números de teléfono de 10 personas. 
El programa debe leer los datos introducidos por el usuario y guardarlos en memoria (en el array). 
Después debe ser capaz de buscar el nombre correspondiente a un número de teléfono y el teléfono correspondiente a una persona. 
Ambas opciones deben ser accesibles a través de un menú, así como la opción de salir del programa. El menú debe tener esta forma, más o menos:
a) Buscar por nombre
b) Buscar por número de teléfono
c) Salir
Pulsa una opción */


#include <iostream>
#include <cstring>

using namespace std;

int bus_nom(char nom[10]);
int bus_tel(char tel[10]);

struct Persona
	{
    	char Nom[10];
    	char Tel[10];
	}	
	uva[10];
	
int bus_nom(char nom[10])
	{
    	bool encontrado=0;
    	int i=0;
    	while(i<10&&!encontrado)
    	{
        	if(strcmp(nom,uva[i].Nom)==0)
        	{
            encontrado=1;
        	}
        i++;
    	}
    if(i<10){return --i;}
    else{return 6;}
	}
	
int bus_tel(char tel[10])
	{
    	bool encontrado=0;
    	int i=0;
    	while(i<5&&!encontrado)
    	{
        	if(strcmp(tel,uva[i].Tel)==0)
        	{
            encontrado=1;
        	}
        i++;
    	}
    if(i<10){return --i;}
    else{return 6;}
}	

int main()
{
	cout<< ""<<endl;
	cout<< "################################## Parcial 2 ############################### "<<endl;
	cout << "################################## Programa 1 ###############################"<<endl<<endl;
	cout<< "A Continuacion introduzca los siguiente datos para su agenda telefonica "<<endl<<endl;
  
    char opc;
    char enc_nom[10];
    char enc_tel[10];
    for(int i=0;i<10;i++)
    	{
		cout<<""<<endl;     
		  
        cout<<"Intruduzca su Nombre:"<<endl;
        cin>>uva[i].Nom;
        cout<<"Introduzca su numero de Telefono:"<<endl;
        cin>>uva[i].Tel;
    	}
    
	cout<<""<<endl;  
	cout << "Busque sus contactos ";   
    cout << "a) Buscar por nombre" << endl;
    cout << "b) Buscar por numero de telefono" <<endl;
    cout << "c) Salir" <<endl<<endl;
    cin >>opc;
    
    switch(opc)
    {
        case 'a':
        {
            cout<<"Ingrese el nombre que desea buscar:"<<endl;
            cin>>enc_nom;
            if(bus_nom(enc_nom)<10)
            
            {
                int num=bus_nom(enc_nom);
                cout<<"Personas "<<endl;
                cout<<"Numero de la Persona :"<<num+1<<endl;
				cout<<"Nombre Del contacto: "<<uva[num].Nom<<endl;
				cout<<"Numero de Telefono: "<<uva[num].Tel<<endl;
            }
            else{cout<<"No se encuentra esta persona "<<endl;}
        }
        break;
        case 'b':
        {
            cout<<"Ingrese el numero de telefono que desea buscar:"<<endl;
            cin>>enc_tel;
            if(bus_tel(enc_tel)<10)
            {
                int num=bus_tel(enc_tel);
                cout<<"Persona Encontrada"<<endl;
                cout<<"Persona N:"<<num+1<<endl;
				cout<<"Nombre: "<<uva[num].Nom<<endl;
				cout<<"Numero de Telefono: "<<uva[num].Tel<<endl;
            }
            else{cout<<"No se encuentra esta persona almacenada"<<endl;}
        }
        break;
        case 'c':cout<<"Salir del Sistema"<<endl;
            break;
        default:break;
    }
    
    system("pause");
    return 0;
}


