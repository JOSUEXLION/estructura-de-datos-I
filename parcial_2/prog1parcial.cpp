#include<iostream>
#include<stdio.h>
#include<conio.h>

int menu();
void captura();
void mostrar();

int agenda[10][10];
int vector[1];
int i, j;

int main(){
int op;
do{
//clrscr();
op = menu();
switch(op){
case 1:
captura();
break;
case 2:
mostrar();
break;
case 3:
default:
break;
}
}while(op != 3);

}

int menu(){
int opcion;
cout<<"M E N U\n";
cout<<"1. Captura\n";
cout<<"2. Mostrar\n";
cout<<"3. Salir\n";
cout<<"Escoja una opcion: ";
cin>>opcion;
return opcion;
}
void captura(){
int x = 4;
clrscr();
cout<<"Digite el numero de personas que desea capturar: ";
for (i = 0; i < 1;i++){
cin>>vector[i];
}
for (i = 0; i < vector[0]; i++){
for(j = 0; j < x; j++){
if (j == 0){
clrscr();
cout<<"\n digite nombre: ";
cin>>agenda[i][j];
}
if (j == 1){
cout<<"\n digite apellido: ";
cin>>agenda[i][j];
}
if (j == 2){
cout<<"\n digite cedula: ";
cin>>agenda[i][j];
}
if (j == 3){
cout<<"\n digite telefono: ";
cin>>agenda[i][j];
}
}
}
}
void mostrar(){
int z = 4;
clrscr();
for (i = 0; i < vector[0]; i++){
for(j = 0; j < z; j++){
if (j == 0){
clrscr();
cout<<"\n nombre: "<<agenda[i][j];
}
if (j == 1){
cout<<"\n apellido: "<<agenda[i][j];
}
if (j == 2){
cout<<"\n cedula: "<<agenda[i][j];
}
if (j == 3){
cout<<"\n telefono: "<<agenda[i][j];
cout<<"\n presione una tecla";
getch();
}
}
}
}

