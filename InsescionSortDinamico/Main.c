#include <stdio.h>
#include <stdlib.h>

/*===================================================================================================


Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Ordina un Array dinamicamente (InsectionSort)
Data    		: 15/12/2014

To Do:  -Complete-
- Aggiungere la Sub del Insection Sort
- Gestire la memoria dinamica
-----------------------------------------------------------------------------------------------------*/

void InsectionSort (int Array[],int N);

main ()
{
    //Dichiarazione
    int 		*Array ;
    int 		i,
				N;

    //Inizializzazione del array da ordinare
    printf ("Inserisci il numero di elementi del array: ");
    scanf ("%d",&N);


   Array = (int *) malloc (N*sizeof(int ));

    for (i=0; i<N; i++){
        printf("\nInserisci il valore della cella[%d]: ", i);
        scanf("%d",&Array[i]);
    }

    //Chiamata delle function
    InsectionSort ( Array, N);

    //Stampo del risultato
    for (i=0; i<N; i++){
        printf("\nArray[%d]:\t%d", i, Array[i]);
    }
    
    //non si usa "free(array);"???
}


/*==============================================================================
Autore : Carmine Cuofano
Data   : 15/12/2014
							InsectionSort
------------------------------------------------------------------------------*/
void InsectionSort (int Array[],int N)
{
    int i  ,     //Indice
        j  ,	 //Cella successiva a quella puntata
        App;   //Variabile di Appoggio


    for(i=0 ; i < N-1 ; i++)
    {
        for(j = i+1 ; j < N ; j ++)
        {
            if(Array[i]>Array[j]) //Crescente
            {
                App      = Array[i];
                Array[i] = Array[j];
                Array[j] = App;
            }
        }
    }
}

