void mostList(int &r,int*);
void inser(int h ,int arreg[]);
void burb(int R ,int arregbur[] );
void merge(int arr[], int l, int m, int r) ;
void mergeSort(int arr[], int l, int r) ;
void MostArray(int A[], int tam);

///Función para mostrar estado de la lista
void mostList(int & r,int*lista)
{
	int i;
	for (i=0; i< r; i++)
	{
		printf("[%d]",*(lista+i));
	}
	printf("\n");
}

void inserc (int h ,int arreg[])
{
	int i,clave,j;
	
   //Recorrer el arreglo
   
	for (i = 1; i < h; i++){	   
		clave = *(arreg+i);
		j = i-1;
		
		//Comparar el valor selecionado con todos los valores anteriores
		
		while (j >= 0 && *(arreg+j) > clave)
		{
			//Insertar el valor donde corresponda
			*(arreg+j+1) = *(arreg+j);
			j = j-1;
		}
		*(arreg+j+1) = clave;
		mostList(h,arreg);
	}    
	mostList(h,arreg);  
}

void burb (int R,int arregburb[] )
{
    int i, pasada, aux;
			  
        printf("Datos en el orden inicial:\n\n");
        for(i=0;i<=R-1;i++)
        
                printf("[%d]",arregburb[i]);
                
        for (pasada=1;pasada<=R-1;pasada++) /*pasadas*/
        
            for (i=0;i<=R-2;i++)
            
                if (arregburb[i]>arregburb[i+1]) /*comparación */
                {
                    /*intercambio*/
                    aux=arregburb[i]; 
                    arregburb[i] = arregburb[i+1]; 
                    arregburb[i+1] = aux;
                }
        printf( "\n\nLos datos ordenados en sentido ascendente son:\n\n" );
        
            for (i=0;i<=R-1;i++ )
            
                printf("[%d]", arregburb[i]);
                printf("\n"); 
        getch(); 
}
        
// Mezlca  dos subarrays de  arr[]. 
// primer subarray es arr[l..m] 
// Segundo subarray es arr[m+1..r] 
void merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	/* crear los modelos  arrays */
	int L[n1], R[n2]; 

	/* Copiar data al  temp arrays L[] and R[] */
	for (i = 0; i < n1; i++) 
	    L[i] = arr[l + i]; 
	    
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1 + j]; 

	/* Mezcla el temp arrays de nuevo en arr[l..r]*/
	i = 0; // Inicia index de 1 subarray 
	j = 0; // Initial index de 2 subarray 
	k = l; // Initial index de mezcaldo subarray 
	
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			arr[k] = L[i]; 
			i++; 
		} 
		else 
		{ 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	/* Copia el remanente de elementos de L[], si hay 
	*/
	while (i < n1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	/* copia el remanente de elementos R[], si hay
	 */
	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 

/* l es para el izquierdoi ndex y r para  derech index de 
sub-array de arr para ser unido */

void mergeSort(int arr[], int l, int r) 
{ 
	if (l < r) 
	{ 
		// lo mismo (l+r)/2, pero evade el sobre llenado 
		// largo l y h  altura
		int m = l + (r - l) / 2; 

		// mezcla mitades
		mergeSort(arr, l, m); 
		mergeSort(arr, m + 1, r); 

		merge(arr, l, m, r); 
	} 
} 

/* funciones utiles*/
/* muestra el vector */

void MostArray(int A[], int size) 
{ 
	int i; 
	
	for (i = 0; i < size; i++) 
	printf(" [%d]  ", A[i]); 
	printf("\n"); 
} 


