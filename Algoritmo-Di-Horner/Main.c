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
	int	N=0,
		i=0,
		X=0,	//Grado da calcolare
		Ris=0,	//Risultato della formula
		Grado=0;
	
	int A[11];
	
	//----------Insert Polinomio-------------------------------------------------
	do{
		printf("\nInserisci il MASSIMO grado [MAX10] del polinomio:");
		scanf("%d",N);
	}
	while (N>10)
	
	for(i=0; i<N; i++)
	{
		printf("\nInserisci il valore della x di grado %d:",i);
		scanf("%d",A[i]);
	}
	
	do{
		printf("\nInserisci il valore del grado da calcolare [MAX10]:");
		scanf("%d",X);
	}
	while (X>10)
	//----------Applco il polinomio di Horner-------------------------------------------------
	for (i=Grado-1; i>=0; i--)
	{
		Ris = A[i]*X+A[i+1];
	}
	printf ("Sfruttando la formula di Horner il risultato e`:\t%d", ris);
}
