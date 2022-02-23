/* Esta biblioteca contiene todos los metodos de ordenamienos pedidos y llama tambien a otras librerias */

int xy,yx;
int gotoxy(int x, int y); 
 
void ingresar(int & k , int lista[]);
void selecc(int & q, int numeros[]);
void intercamb(int vector[], int i, int j);
void quicksort(int vector[], int inf, int sup); 
void imprimVector(int MAX, int vector[], int elem);

void ingresar ( int & k ,int lista[])
{
lista[k];

for (int u=0;u<k;u++)
{
printf("\nIngrese el valor: ");
scanf ("%d",& lista[u]);
}
}

void selecc(int & q,int num [])
{
	num[q];
    int aux,min;
      
      //Mostramos el vector desordenado
      
      printf("La lista de manera desordenada es :\n");
      
      for(int i=0;i<q;i++)
	  {
      	printf("%d", num[i]);
      }
      
      //Algoritmo de ordenamiento por seleccion
      
      for(int i=0; i<q; i++)
	  {
      	min=i;
      	for(int j=i+1; j<q; j++)
		  {
      		if(num[j] > num[min])
			{
      			min=j;
      		}
		
	       }
	   aux=num[i];
	   num[i]=num[min];
	   num[min]=aux;
	  }
	  
	  //Muestra los numeros del vector desde el mas chico al mas grande
	  
	  printf("\nLa lista de manera ordenada descentente es :\n");
	  
	  for(int i=0; i<q; i++)
	  {
	  	printf("[%d]", num[i]);
	  }
	  
	  //Muestra los numeros del vector desde el mas grande al mas chico
	  
	  for(int i=0; i<q; i++)
	  {
      	min=i;
      	
      	for(int j=i+1; j<q; j++)
		  {
      		if(num[j] < num[min])
			{
      			min=j;
      		}
		
	       }
	   aux=num[i];
	   num[i]=num[min];
	   num[min]=aux;
	  }
	   printf("\nLa lista de manera ordenada ascendente es :\n");
	  
	  for(int i=0; i<q; i++)
	  {
	  	printf("[%d]", num[i]);
	  }
	  
	  getch();
}

void intercamb(int vector[],int i, int j)
{
 int aux;
 
 aux=vector[i];
 vector[i]=vector[j];
 vector[j]=aux;
}
 
void quicksort(int vector[],int inf, int sup)
{
 int i;
 int j;
 int x;
 
 i=inf;
 j=sup;
 x=vector[(i+j)/2]; //obteniendo el pivote
 
 while(i<=j)
 { 
 while(vector[i]<x)    //obteniendo elemento mayor de lado izquierdo del  pivote para intercambiar
 i++;
 
 while(vector[j]>x)   // obteniendo elemento menor de lado derecho del pivote a intercambiar
 j--;
 
 if(i<=j)             //intercambiando cuando se sigan presentando valores menores ala derecha y mayores ala izquierda
 {
 intercamb(vector,i,j);
 i++;
 j--;
 }
 }
 if(inf<j)
 quicksort(vector,inf,j);
 
 if(i<sup)
 quicksort(vector,i,sup);
}
 
void imprimVector(int MAX,int vector[],int elem)
{
 int i;
 
 printf("\n Vector ordenado con Quicksort\n");
 
 for(i=0; i<elem; i++)
 {
 printf("[%d] ",vector[i]);
 }
}
    
// permite mover la funcion printf 

int gotoxy(int xy,int yx)
{  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = xy;  
      dwPos.Y= yx;  
      SetConsoleCursorPosition(hcon,dwPos);  
      
}    
        
        
        
