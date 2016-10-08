#include <iostream>
#include <stdlib.h>
#include <cstdlib>


usin namespace std;

struct estudiante{
	   int turno, curso;
       double mont, inc, tot;
};
// declaracion de variables         
int i, n;
void leer(int &n, estudiante a[100]);
void numEstudiantes(int n, estudiante a[100]);
void calTotal(int n, estudiante a[100]);
void imprimir(int n, estudiante a[100]);

int main()
{ 
cout << """"<<endl;
cout << " En este programa se registran los alumnos "<<endl;
cout << "   Que llevan curso de extension "<<endl;
cout << "\n A continuacion introduzca los siguientes datos"<< endl ;
     estudiante a[100];
 
// inicia el programa introduciendo la cantidad de alumnos
void leer(int &n, estudiante a[100]){
     cout<<"\n"<<"Introduzca cantidad de Alumnos: ";
     cin>>n;
     for(i=0; i<n; i++){
     	if (i>0) {cout<<"\n" <<"Siguiente Alumnos: ";
		 }
		  cout << "Estudiante # " << i + 1 << endl;
         cout <<"\n"<< "Seleccionar curso: Introduzca el numero de acuerdo al curso que seleccionara"<<"\n" // se selecciona el curso segun el numero
         << "1: Java, 2: C++, 3: .Net" << endl;
         cin>>a[i].curso;
         cout<<"\n" << "seleccionar turno: Introduzca el numero de acuerdo al horario que seleccionara"<<"\n" // se selecciona el horario segun el numero
         <<"1: Manana, 2: Tarde, 3: Noche" << endl;
         cin>>a[i].turno;
     }    
}
 // funcion para cuanto cuesta la materia
void calTotal(int n, estudiante a[100]){
     for(i=0; i<n; i++)
         switch(a[i].curso){
             //  case 1: a[i].mont=580; break;
           //    case 2: a[i].mont=420; break;
         //      case 3: a[i].mont=600; break;
         }
         // funcion del porcentaje dependiendo del horario
     for(i=0; i<n; i++)
         switch(a[i].turno){
                case 1: a[i].inc=0; break;
                case 2: a[i].inc=0.05*a[i].mont; break;
                case 3: a[i].inc=0.10*a[i].mont; break;
         }
         // incremento de $25.00
     for(i=0; i<n; i++)
         a[i].tot=a[i].mont+a[i].inc+25.00;
}
// funcion para la seleccion de los cursos 
void numEstudiantes(int n, estudiante a[100]){
     int cj=0, cc=0, cn=0;
     for(i=0; i<n; i++)
         switch(a[i].curso){
//               case 1: cj++;      break;
//               case 2: cc++;      break;
//               case 3: cn++;      break;
         }
         system("cls");
         // se imprime la cantidad de alumnos por materia y total
     cout<<"\n\n"<<" 1.  La cantidad de estudiantes que seleccionaron curso de Java son: "<<cj<<endl
         <<" 2.  La cantidad de estudiantes que seleccionaron curso de C++  son: "<<cc<<endl
         <<" 3.  La cantidad de estudiantes que seleccionaron curso de .NET son: "<<cn<<"\n"<<endl
         << " Cantidad Total de Alumnos:  " <<n<<"\n"<<endl;
}
 // se imprime el resultado 
void imprimir(int n, estudiante a[100]){
     for(i=0; i<n; i++)
     
     cout << " Alumno #      " <<i + 1<<"\n"
      <<" curso #: " <<a[i].curso<<" Monto principal del curso $/. "<<a[i].mont<<".00"<<"\n"
     <<"  Derecho a examen:                   $/. 25.00" <<"\n"
     <<" Incremento por turno:                       " <<a[i].inc<<"%"<<"\n"
     << "                                   \t-----------"<<" \n"
     <<"  Monto total a pagar:                $/. " <<a[i].tot<<".00"<<"\n" <<endl;
     system("PAUSE"); 
}
