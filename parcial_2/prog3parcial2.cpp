/* Programa  # 3
Escribir un programa en C++ que almacene en un arreglo de registros las características de 150 personas: 
nombre, sexo, edad, peso, color de pelo, color de piel, color de ojos, nacionalidad y teléfono. */

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	cout<< ""<<endl;
	cout<< "################################## Parcial 2 ############################### "<<endl;
	cout << "################################## Programa 3 ###############################"<<endl<<endl;
	cout<< "A Continuacion introduzca los siguiente datos"<<endl<<endl;
	

	int uva = 150; 
	string name[uva];
	string sex[uva];
	int year[uva];
	int weight[uva];
	string colorhair[uva];
	string colorskin[uva];
	string coloreyes[uva];
	string nacionality[uva];
	int phone[uva];
	
	for (int i = 0; i < 150; i++)
	{
		cout << "Ingrese Su Nombre: ";
		cin >> name[i];
		cout << "Ingrese Su Sexo: ";
		cin >> sex[i];
		cout << "Ingrese Su Edad: ";
		cin >> year[i];
		cout << "Ingrese Su Peso: ";
		cin >> weight[i];
		cout << "Ingrese el Color de Pelo: ";
		cin >> colorhair[i];
		cout << "Ingrese el Color de Piel: ";
		cin >> colorskin[i];
		cout << "Ingrese el Color de Ojos: ";
		cin >> coloreyes[i];
		cout << "Ingrese Su Nacionalidad: ";
		cin >> nacionality[i];
		cout << "Ingrese Su Telefono: ";
		cin >> phone[i];
		cout << endl << endl;
	}

	for (int i = 0; i < 150; i++)
	{
		cout<<" " <<endl;	
		cout<<"Personas registradas segun su caracteristicas:" <<endl;	
		cout<< "" <<endl<<endl;	
		cout << " Su Nombre: " << name[i] << endl;
		cout << "Su Sexo: " << sex[i] << endl;
		cout << "Su Edad: " << year[i] << endl;
		cout << "Su Peso: " << weight[i] << endl;		
		cout << "Su Color de Pelo: " << colorhair[i] << endl;
		cout << "Su Color de Piel: " << colorskin[i] << endl;
		cout << "Su Color de Ojos: " << coloreyes[i] << endl;
		cout << "Su Nacionalidad: " << nacionality[i] << endl;
		cout << "Su Telefono: " << phone[i] << endl;
		cout<<"" <<endl<<endl;			
	}
	
system ("pause");
return 0;	
}
