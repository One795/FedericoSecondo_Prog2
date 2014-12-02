#include <stdio.h>
#include <conio.h>



/*==============================================================================


Autore      : Carmine Cuofano		Matricola: N86001700
Programma   : Algoritmo Di Horner
Data        : 24/11/2014

To Do:
-Valutare la difficoltà di un polinomio sfruttando la formula di Horner

------------------------------------------------------------------------------*/


main ()
{

	//----------Dichiarazione Variabili-----------------------------------------
	int N=0,
		I=0,
		X=0, 
		Grado=0;
	
	int A[11];
	
	//----------Insert Polinomio-------------------------------------------------
	do{
		printf("\nInserisci il MASSIMO grado [MAX10] del polinomio:");
		scanf("%d",N);
	}
	while (N>10)
	
	for(I=0; I<N; I++)
	{
		printf("\nInserisci il valore della x di grado %d:",I);
		scanf("%d",A[I]);
	}
	
	do{
		printf("\nInserisci il valore del grado da calcolare:");
		scanf("%d",X);
	}
	while (X>10)
	//----------Applco il polinomio di Horner-------------------------------------------------
	
}
