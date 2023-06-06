#pragma once
#include "Node.h"

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
};
