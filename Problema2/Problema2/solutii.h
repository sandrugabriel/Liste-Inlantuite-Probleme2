#pragma once
#include "List.h"


List list;

/*#488
Se citește un vector cu n elemente, numere naturale. Să se afișeze elementele cu indici pari în ordinea
crescătoare a indicilor, iar elementele cu indici impari în ordinea descrescătoare a indicilor.
EX:
5
7 9 2 6 8
se afiseaza
9 6
8 2 7*/
void solutia1() {

	int dim = 5;
	int v[100] = { 7, 9 ,2, 6, 8 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	list.afisareCrescDesc(dim);

}

/*#489
Se citește un vector cu n elemente, numere naturale. Să se afișeze elementele vectorului în următoarea ordine: 
primul, ultimul, al doilea, penultimul, etc.
Ex:
5
2 9 1 5 8
se va afisa
2 8 9 5 1*/
void solutia2() {

	int dim = 5;
	int v[100] = { 2, 9 ,1 ,5 ,8 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	list.afisarePrimUltim(dim);
}

/*#4151
Se citește un vector cu n elemente, numere naturale distincte. Să se afișeze elementele cuprinse între 
elementul cu valoarea minimă și cel cu valoare maximă din vector, inclusiv acestea.
Ex:
5
7 9 6 2 8
se afiseaza
9 6 2*/
void solutia3(){

	int dim = 5;
	int v[100] = { 7, 9, 6 ,2 ,8 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	list.afisareInterval(dim, list.pozmaxi(dim), list.pozmini(dim));

}

/*#2858
Să se afișeze elementele șirului de la dreapta la stânga.
Să se calculeze suma valorilor pare din șir.
Să se determine suma valorilor aflate pe poziții pare în șir.
Să se determine numărul numerelor din șir care sunt divizibile cu 10.
Ex:
10
1 2 3 4 5 6 7 8 9 10
se afiseaza
10 9 8 7 6 5 4 3 2 1 
30
30
1
12*/
void solutia4() {

	int dim = 10;
	int v[100] = { 1, 2 ,3 ,4 ,5 ,6, 7, 8 ,9, 10 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	list.afisareDreapta(dim);
	cout << endl;
	cout << list.sumPare(dim);
	cout << endl;
	cout << list.sumParePoz(dim);
	cout << endl;
	cout << list.ctdiv10(dim);

}

/*#492
Să se determine suma numerelor divizibile cu 3 și aflate pe poziții impare.
Ex:
10
1 2 3 4 5 6 7 8 9 10
se afiseaza 12
*/
void solutia5() {

	int dim = 10;
	int v[100] = { 1, 2 ,3 ,4 ,5 ,6, 7, 8 ,9, 10 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.sumdiv3(dim);
}























































