#include "stdio.h"

float MediaAritmetica(int Array[], int N);

/*==============================================================================


Autore      : Carmine Cuofano		Matricola: N86001700
Programma   : Media di un Array di int ordinato (SelectionSort)
Data        : 01/12/2014

To Do:  -Complete-
- Aggiungere la Sub del Selection Sort
------------------------------------------------------------------------------*/


main ()
{
    //Dichiarazione
    int     Array [100];
    int     i,
            N;
    float   Media;

    //Inizializzazione del array da ordinare
    printf ("Inserisci il numero di elementi del array <MAX100>:");
    scanf ("%d",&N);

    for (i=0; i<N; i++){
        printf("\nInserisci il valore della cella[%d]", i);
        scanf("%d",&Array[i]);
    }
    //Chiamata delle function
    Media = MediaAritmetica( Array, N);
    //Stampo del risultato
    printf("\nIl risultato e:%d",Media);
}


void selectionSort(int A[], int N) {
  int   i,
        j,
        App,
        min;

  for (i=0; i<N-1; i++) {
    min = i;
    for (j=i+1; j<N; j++)
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
