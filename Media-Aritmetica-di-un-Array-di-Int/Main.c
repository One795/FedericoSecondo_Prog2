#include "stdio.h"

float MediaAritmetica(int Array[], int N);

/*==============================================================================


Autore      : Carmine Cuofano		Matricola: N86001700
Programma   : Media di un Array di int ordinato (SelectionSort)
Data        : 01/12/2014

To Do:  -NoComplete-
- Aggiungere alla Sub del Selection Sort
    - La media deve essere solo per le cifre pari 
    - Conta il numero di valori di cui si è fatta la media
------------------------------------------------------------------------------*/


main ()
{
    //Dichiarazione
    int     Array [100];
    int     i,
            k,
            N;
    float   Media;

    //Inizializzazione del array da ordinare
    printf ("Inserisci il numero di elementi del array <MAX100>:");
    scanf ("%d",&N);

    for (i=0; i<N; i++){
        printf("\nInserisci il valore della cella[%d]", i);
        scanf("%d",&Array[i]);
    }
    
    //Inizializzazione del array da ordinare
    printf ("Inserisci il numero di elementi del array di cui fare la Media <MAX100>:");
    scanf ("%d",&k);
    
    //Chiamata delle function
    Media = MediaAritmetica( Array, k);
    //Stampo del risultato
    printf("\nIl risultato e:%d",Media);
}


void selectionSort(int A[], int k) {
  int   i,
        j,
        App,
        min;

  for (i=0; i<k-1; i++) {
    min = i;
    for (j=i+1; j<k; j++)
      if (A[j]<A[min])
        min = j;
        App=A[min];
        A[min]=A[i];
        A[i]=App;
  }
}

float MediaAritmetica(int Array[], int N){
    int     i;
    float   Media;

    for(Media=i=0; i<N; i++){
        Media = Media + Array[i];
    }
    Media = Media/N;

    return Media;
}
