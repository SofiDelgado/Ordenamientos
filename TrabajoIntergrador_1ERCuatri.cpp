#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "Ord1.h"
#include "Ord2.h"

int w =35;
int l =2; 

/*
Métodos utilizados :        
f Define tamaño de los vectores ;
2:Selección
3:Quicksort
4:Inserción
5:Burbuja mejorada 
6:Mergesort
*/

  main ()
{
int bandmenu=1, n=NULL, f;	

while (bandmenu!=0)
{	
printf ("################################### \n##                               ##\n## Ingrese el metodo que quiera: ##\n##                               ##\n###################################\n##                               ##\n## 2:Seleccion                   ##\n##                               ##\n## 3:Quicksort                   ##\n##                               ##\n## 4:Incercion                   ##\n##                               ##\n## 5:Burbuja mejorada            ##\n##                               ##\n## 6:Mergesort                   ##\n##                               ##\n################################### \n\n ");
scanf("%d",&n);
printf ("\n#####################################\n##                                 ##\n## Ingrese el tamaño de el vector: ##\n##                                 ##\n#####################################\n\n  ");
scanf("%d",&f);

int sel [f],sel_quick [f],sel_incer[f],sel_burbuja[f],sel_merge[f]; ;
int arr_size = sizeof(sel_merge) / sizeof(sel_merge[f]); 

switch(n)
{
case 2:
	
system("color 0b");

ingresar (f,sel);
selecc(f,sel);

getch();

system("cls");	

break;	

case 3:	 

system("color 05");

ingresar (f,sel_quick);	
quicksort(sel_quick,0,f-1);
imprimVector(f,sel_quick,f);
	
system ("pause") ;
system("cls");
	
break;		

case 4:
	
system("color 02");

ingresar (f,sel_incer);
inserccion(f,sel_incer);

system ("pause") ; 
system("cls");	
		
break;		

case 5:	

system("cls");	
system("color 07");

ingresar (f,sel_burbuja);
burbuja(f,sel_burbuja);

system ("pause") ; 
system("cls");	
	
break;	
	
case 6:
	
system("color 09");

ingresar (f,sel_merge);
printf("\nArray dado es \n"); 
MostrarArray(sel_merge, arr_size); 
mergeSort(sel_merge, 0, arr_size - 1); 
printf("\nOrdenado es  \n"); 
MostrarArray(sel_merge, arr_size);

system ("pause") ; 
system("cls");
	
break;
	
default:

system("color 4f");

gotoxy(w,1);
printf("##########");
gotoxy(45,l);
printf("*");
gotoxy(w,l);		
printf ("  ERROR  ");
gotoxy(34,l);
printf("*");
gotoxy(w,3);
printf("##########");

getch();

system("cls");

break; 
};

printf (" \n  Desea continuar? \n Presione (0) para salir o (1) Para continuar \n");
scanf("%d",& bandmenu);
	
getch ;

system("cls");	
};
}



