﻿#pragma once
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

/*#4381
Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente egal 
depărtate de capetele vectorului au aceeași cifră a zecilor.
Ex:
6
145 207 56 1248 1001 249
se afiseaza 4
*/
void solutia6() {

	int dim = 6;
	int v[100] = { 145, 207, 56, 1248, 1001, 249 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.ctPerechiCifZeci(dim);

}

/*#495
Se dă un vector x cu n elemente, numere naturale. Să se construiască un alt vector, y, care să conțină elementele prime
din x, în ordine inversă.
Ex:
6
50 5 15 29 13 40
 se afiseaza 13 29 5
*/
void solutia7() {

	int dim = 6;
	int v[100] = { 50, 5, 15, 29 ,13, 40 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);
	List y;

	y.addPrime(dim, list);
	y.afisare();
}

/*#499
Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente din vector sunt
formate din valori cu aceeași sumă a cifrelor.
Ex:
6
51 842 15 28 77 132
se afiseaza 4
*/
void solutia8() {

	int dim = 6;
	int v[100] = { 51, 842, 15, 28, 77, 132 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.ctPerechiSumEgal(dim);
}

/*#4286
Se dă un vector x cu n elemente, numere naturale. Să se construiască un alt vector, y, care să conțină 
elementele impare din x, în ordine inversă.
Ex:
6
50 5 15 29 13 40
se afiseaza 
13 29 15 5*/
void solutia9() {

	int dim = 6;
	int v[100] = { 50, 5, 15, 29 ,13, 40 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	list.afisareInversaImpar(dim);

}

/*#493
Se dă un vector x cu n elemente, numere naturale. Să se construiască un alt vector, y, cu proprietatea că y[i] este egal
cu restul împărțirii lui x[i] la suma cifrelor lui x[i].
Ex:
6
50 1815 15 289 35 40
se afiseaza 0 0 3 4 3 0
*/
void solutia10() {

	int dim = 6;
	int v[100] = { 50, 1815, 15, 289 ,35, 40 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	List y;

	y.addRestulImp(dim, list);
	y.afisare();

}


/*#986
Se dă un șir cu n elemente, numere reale. Să se determine câte dintre elemente se află în afara intervalului închis
determinat de primul și ultimul element.
Ex:
6
2 0 4 -1 -8 -3 se afiseaza 2
*/
void solutia11() {

	int dim = 6;
	int v[100] = { 2, 0, 4, -1, -8, -3 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.ctIntervalAfara(dim);
}

/*#498
Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente din vector sunt prime între ele.
Ex:
6
51 18 15 28 77 121 se afiseaza 9
*/
void solutia12() {

	int dim = 6;
	int v[100] = { 51, 18, 15, 28, 77, 121 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.ctPerechiPrime(dim);

}

/*#99
Se dă un șir cu n elemente numere naturale. Să se determine câte elemente din şir sunt egale cu ultimul element al acestuia.
Ex:5
5 3 2 4 5
se afiseaza 2
*/
void solutia13() {

	int dim = 5;
	int v[100] = { 5, 3 ,2, 4 ,5 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.ctEgalUiltim(dim);
}


/*#100
Se dă un șir cu n elemente numere naturale. Să se determine câte elemente din şir sunt numere prime.
Ex:
5
25 17 2 10 13
se afiseaza 3
*/
void solutia14() {

	int dim = 5;
	int v[100] = { 25, 17, 2, 10, 13 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.ctNrPrime(dim);
}

/*#132
Să se afișeze elementele din șir care au proprietatea că primele două cifre din scrierea zecimală formează un pătrat perfect.
Ex:
5
253 16 225 100 3678
se afiseaza 253 16 3678
*/
void solutia15() {

	int dim = 5;
	int v[100] = { 253, 16, 225 ,100, 3678 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	list.afisarePatratPerf(dim);
}























































