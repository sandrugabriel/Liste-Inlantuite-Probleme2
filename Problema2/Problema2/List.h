#pragma once
#include "Node.h"
#include <math.h>

struct List
{

private:
	Node* head = NULL;
public:

	void addStart(int  nr) {


		if (head == NULL) {

			head = new Node();

			head->setNext(NULL);
			head->setData(nr);
		}
		else {
			Node* nou = new Node();
			nou->setNext(head);
			nou->setData(nr);
			head = nou;

		}

	}

	Node* getHead() {
		return head;
	}

	void afisare() {


		Node* aux = head;


		while (aux != NULL)
		{

			cout << aux->getData() << " ";
			aux = aux->getNext();
		}

	}

	void addEnd(int nr) {

		if (head == NULL) {

			head = new Node();

			head->setNext(NULL);
			head->setData(nr);
		}
		else {


			Node* aux = head;

			while (aux->getNext() != NULL) {

				aux = aux->getNext();
			}


			Node* nou = new Node();

			nou->setNext(NULL);
			nou->setData(nr);
			aux->setNext(nou);

		}


	}

	void addPoz(int nr, int poz) {


		if (head == NULL) {

			head = new Node();

			head->setNext(NULL);
			head->setData(nr);
		}
		else
		{

			Node* aux = head;

			int ct = 0;

			if (poz == 0) {
				addStart(nr);
				return;
			}

			while (ct < poz - 1)
			{

				aux = aux->getNext();
				ct++;
			}

			if (aux->getNext() == NULL) {

				addEnd(nr);
				return;
			}

			Node* nou = new Node();
			nou->setNext(aux->getNext());
			nou->setData(nr);
			aux->setNext(nou);

		}


	}

	void stergereaPrimElement() {

		head = head->getNext();

	}

	void stergereUltim() {

		Node* aux = head;

		while (aux->getNext()->getNext() != NULL)
		{
			aux = aux->getNext();
		}

		aux->setNext(NULL);

	}

	void stergerePoz(int poz) {

		Node* aux = head;

		int ct = 0;

		if (poz == 0) {
			stergereaPrimElement();
			return;
		}

		while (ct < poz-1)
		{
			aux = aux->getNext();
			ct++;
		}

		if (aux->getNext() == NULL) {
			stergereUltim();
			return;
		}

		aux->setNext(aux->getNext()->getNext());

	}

	int size() {

		Node* aux = head;
		int ct = 0;
		while (aux->getNext() != NULL)
		{
			aux = aux->getNext();
			ct++;
		}

		return ct + 1;
	}

	void setPoz(int poz, int nr) {
		Node* aux = head;
		int ct = 0;
		while (ct < poz)
		{
			aux = aux->getNext();
			ct++;
		}

		aux->setData(nr);


	}

	int getPoz(int poz) {

		Node* aux = head;

		int ct = 0;

		while (ct < poz)
		{
			aux = aux->getNext();
			ct++;
		}

		return aux->getData();
	}

	void crescator(int dim) {

		Node* head1 = head;

		int semn = 1;

		do {
			semn = 1;
			head1 = head;
			for (int i = 0; i < dim - 1; i++) {

				if (head1->getData() > head1->getNext()->getData()) {

					int aux = getPoz(i);
					setPoz(i, getPoz(i + 1));
					setPoz(i + 1, aux);
					semn = 0;
				}

				head1 = head1->getNext();
			}

		} while (semn == 0);



	}

	int maxi(int dim) {
		Node* aux = head;
		int maxi = -1;

		for (int i = 0; i < dim; i++) {

			if (aux->getData() > maxi)
				maxi = aux->getData();

			aux = aux->getNext();
		}

		return maxi;
	}

	int mini(int dim) {
		Node* aux = head;
		int mini = 99999;

		for (int i = 0; i < dim; i++) {

			if (aux->getData() < mini)
				mini = aux->getData();

			aux = aux->getNext();
		}

		return mini;
	}

	bool prim(int nr) {

		if (nr == 0 || nr == 1)
			return false;

		for (int i = 2; i <= nr / 2; i++)
			if (nr % i == 0)
				return false;

		return true;
	}

	int pozmaxi(int dim) {
		Node* aux = head;
		int maxi = -1;
		int poz = 0;

		for (int i = 0; i < dim; i++) {

			if (aux->getData() > maxi) {
				maxi = aux->getData();
				poz = i;
			}

			aux = aux->getNext();
		}

		return poz;
	}

	int pozmini(int dim) {
		Node* aux = head;
		int mini = 99999;
		int poz = 0;

		for (int i = 0; i < dim; i++) {

			if (aux->getData() < mini) {
				mini = aux->getData();
				poz = i;
			}

			aux = aux->getNext();
		}

		return poz;
	}

	int sumaCif(int nr) {

		int s = 0;

		while (nr != 0)
		{
			int c = nr % 10;
			s += c;
			nr /= 10;
		}

		return s;
	}

	int divizorComun(int n, int m) {

		while (m != 0)
		{
			int r = n % m;
			n = m;
			m = r;
		}

		return n;
	}

	int ctNr(int nr) {
		int ct = 0;
		while (nr != 0)
		{
			ct++;
			nr /= 10;
		}
		return ct;
	}

	bool verifPatratPerfect(int nr) {

		int ctnr = ctNr(nr);
		if (ctnr > 2) {
			nr = nr / pow(10, ctnr - 2);
		}

		if (sqrt(nr) == (int)sqrt(nr))
			return true;

		return false;
	}

	void nextI(int i, Node* aux) {

		int ct = 0;

		while (ct < i)
		{
			aux = aux->getNext();
			ct++;
		}

	}

	void afisareCrescDesc(int dim) {

		Node* aux = head;
		aux = aux->getNext();
		for (int i = 2; i <= dim; i += 2) {

			cout << aux->getData()<<" ";
			aux=aux->getNext()->getNext();

		}

		aux = head;
		cout << endl;

		for (int i = dim; i >= 1; i -= 2) {
			int ct = 0;

			while (ct < i-1)
			{
				aux = aux->getNext();
				ct++;
			}

			cout << aux->getData()<<" ";
			aux = head;
		}

	}

	void afisarePrimUltim(int dim) {

		Node* aux = head;
		Node* aux1 = head;	
		for (int i = 0; i < dim; i++) {
			int ct = 0;

			while (ct < i)
			{
				aux = aux->getNext();
				ct++;
			}
			
			if (i % 2 == 0) {
				cout << aux->getData() << " ";
				aux = head;
			}
			else
			{
				ct = 0;
				while (ct < dim-i)
				{
					aux1 = aux1->getNext();
					ct++;
				}
				cout << aux1->getData() << " ";
				aux1 = head;
			}
		

			aux = head;
			aux1 = head;
		}

	}

	void afisareInterval(int dim, int pozMaxi, int pozMini) {

		Node* aux = head;

		for (int i = 0; i < dim; i++) {

			if (pozMaxi > pozMini) {
				int aux = pozMaxi;
				pozMaxi = pozMini;
				pozMini = aux;
			}
			if (i >= pozMaxi && i <= pozMini)
				cout << aux->getData() << " ";
			aux = aux->getNext();
		}

	}

	void afisareDreapta(int dim) {


		Node* aux = head;
		for (int i = dim; i >= 1; i --) {
			int ct = 0;

			while (ct < i - 1)
			{
				aux = aux->getNext();
				ct++;
			}

			cout << aux->getData() << " ";
			aux = head;
		}


	}

	int sumPare(int dim) {

		int s = 0;

		Node* aux = head;

		for (int i = 0; i < dim; i ++) {
			
			if(aux->getData()%2==0)
			s += aux->getData();
			aux = aux->getNext();

		}


		return s;
	}

	int sumParePoz(int dim) {

		int s = 0;

		Node* aux = head;

		for (int i = 1; i <= dim; i++) {

			if (i % 2 == 0)
				s += aux->getData();
			aux = aux->getNext();

		}


		return s;
	}

	int ctdiv10(int dim) {

		int ct = 0;

		Node* aux = head;

		for (int i = 1; i <= dim; i++) {

			if (aux->getData() % 10 == 0)
				ct++;
			aux = aux->getNext();

		}


		return ct;
	}

	int sumdiv3(int dim) {

		int s = 0;

		Node* aux = head;

		for (int i = 1; i <= dim; i++) {

			if (aux->getData() % 3 == 0 && i % 2 == 1)
				s += aux->getData();
			aux = aux->getNext();

		}


		return s;
	}

	int ctPerechiCifZeci(int dim) {

		Node* aux = head;
		Node* nou = head;
		int ct = 0;

		for (int i = 0; i < dim; i++) {
			nou = head;
			nextI(i + 1, nou);

			for (int j = 0; j < dim; j++) {

				if ((nou->getData() != aux->getData()) && ((nou->getData() / 10) % 10 == (aux->getData() / 10) % 10)) {
					ct++;
				}

				if (nou->getNext() == NULL) {
					j = dim;
					break;
				}
				nou = nou->getNext();
			}

			aux = aux->getNext();
		}

		return ct / 2;


	}

	int ctPerechiSumEgal(int dim) {

		Node* aux = head;
		Node* nou = head;
		int ct = 0;

		for (int i = 0; i < dim; i++) {
			nou = head;
			nextI(i + 1, nou);

			for (int j = 0; j < dim; j++) {

				if ((nou->getData() != aux->getData()) && (sumaCif(nou->getData()) == sumaCif(aux->getData()))) {
					ct++;
				}

				if (nou->getNext() == NULL) {
					j = dim;
					break;
				}
				nou = nou->getNext();
			}

			aux = aux->getNext();
		}

		return ct / 2;


	}

	void addRestulImp(int dim, List list) {

		for (int i = 0; i < dim; i++) {
			int nr = list.head->getData();
			int sumacif = sumaCif(list.head->getData());
			addEnd(nr % sumacif);

			list.head = list.head->getNext();
		}

	}

	void afisareInversaImpar(int dim) {

		Node* aux = head;
		for (int i = dim; i >= 1; i--) {
			int ct = 0;

			while (ct < i - 1)
			{
				aux = aux->getNext();
				ct++;
			}
			if(aux->getData()%2==1)
			cout << aux->getData() << " ";
			aux = head;
		}



	}

	void addPrime(int dim, List list) {


		for (int i = 0; i < dim; i++) {

			if (prim(list.head->getData())) {
				addStart(list.head->getData());
			}

			list.head = list.head->getNext();
		}

	}

	int getUltimulNr(int dim) {

		Node* aux = head;

		for (int i = 0; i < dim - 1; i++)
			aux = aux->getNext();

		return aux->getData();
	}

	int ctIntervalAfara(int dim) {

		Node* aux = head;

		int ct = 0;
		int ultim = getUltimulNr(dim);
		int primul = aux->getData();
		for (int i = 0; i < dim; i++) {
			if (aux->getData() < primul && aux->getData() > ultim)
				ct++;

			aux = aux->getNext();
		}

		return ct;
	}

	int ctPerechiPrime(int dim) {

		Node* aux = head;

		int ct = 0;

		for (int i = 0; i < dim; i++) {
			int n, m;
			n = aux->getData();
			Node* nou = head;
			for (int j = 0; j < dim; j++) {
				m = nou->getData();
				if (divizorComun(n, m) == 1) ct++;
				nou = nou->getNext();
			}

			aux = aux->getNext();
		}

		return ct / 2;
	}

	int ctEgalUiltim(int dim) {

		Node* aux = head;

		int ct = 0;

		for (int i = 0; i < dim; i++) {
			if (aux->getData() == getUltimulNr(dim))
				ct++;

			aux = aux->getNext();
		}

		return ct;

	}

	int ctNrPrime(int dim) {

		Node* aux = head;

		int ct = 0;

		for (int i = 0; i < dim; i++) {
			if (prim(aux->getData()))
				ct++;

			aux = aux->getNext();
		}

		return ct;


	}

	void afisarePatratPerf(int dim) {

		Node* aux = head;

		int ct = 0;

		for (int i = 0; i < dim; i++) {
			if (verifPatratPerfect(aux->getData()))
				cout << aux->getData() << " ";


			aux = aux->getNext();
		}


	}

	void afisareSumele(int dim) {

		int ct = dim;
		while (ct >= 1)
		{

			Node* aux = head;
			int s = 0;
			for (int i = 0; i < ct; i++) {

				s += aux->getData();
				aux = aux->getNext();
			}
			cout << s << endl;

			ct--;
		}




	}
	
	void stergerePare(int dim) {

		Node* aux = head;
		for (int i = 0; i < dim; i++) {

			if (aux->getData() % 2 == 0) {
				dim--;
				i--;
				stergerePoz(i);
				aux = head;
			}

				aux = aux->getNext();
			
		}

	}

	void stergereaPrime(int dim) {

		Node* aux = head;
		for (int i = 0; i < dim; i++) {

			if (prim(aux->getData())) {
				dim--;
				stergerePoz(i);
				aux = head;
			}

			aux = aux->getNext();

		}




	}

	void inserareMini(int dim, int mini) {
		
		Node* aux = head;
		for (int i = 0; i < dim; i++) {

			if (aux->getData()==mini) {
				setPoz(i-1,mini);
			}

			aux = aux->getNext();

		}

		


	}

	void stergereEgaleMini(int dim, int mini) {

		Node* aux = head;
		for (int i = 0; i < dim; i++) {

			if (aux->getData()==mini) {
				dim--;
				stergerePoz(i);
				i = 0;
				aux = head;
			}

			aux = aux->getNext();

		}



	}

	bool palindrom(int nr) {
		int a = nr;
		int t = 0;
		while (nr != 0)
		{
			int c = nr % 10;
			t = t * 10 + c;
			nr = nr / 10;
		}

		if (a == t) return true;

		return false;
	}

	void afisarePelindrom(int dim) {

		Node* aux = head;
		int ct = 0, ct1 = 0;
		for (int i = 0; i <= dim / 2; i++) {
			if (ct % 2 == 0) {
				if (palindrom(aux->getData())) {

					cout << aux->getData() << " ";
					ct++;
					aux = aux->getNext();
				}
			}
			else {
				ct1++;
				for (int j = 0; j < ct1; j++) {
					Node* nou1 = head;
					int n = 0;
					while (n < dim - ct1)
					{
						nou1 = nou1->getNext();
						n++;
					}
					if (palindrom(nou1->getData())) {
						cout << nou1->getData() << " ";
						j = dim + 1;
						ct++;
						aux = aux->getNext();
					}
					ct1++;
				}

			}


		}




	}

	void addDublu(int dim) {

		Node* aux = head;
		for (int i = 0; i < dim; i++) {

			if (aux->getData() % 2 == 0) {
				addPoz(aux->getData()*2,i);
				aux = head;
			}

			aux = aux->getNext();

		}



	}

	void inserareRadacina(int dim) {

		Node* aux = head;
		for (int i = 0; i < dim; i++) {

			if (verifPatratPerfect(aux->getData())) {
				addPoz(sqrt(aux->getData()), i);
				i++;
			}

			aux = aux->getNext();

		}

	}

};
