#pragma once
#include <iostream>

using namespace std;

struct Node
{

private:

	Node* next;
	int nr;

public:

	Node() {



	}

	Node* getNext() {
		return next;
	}

	void setNext(Node* n) {
		next = n;
	}

	int getData() {
		return nr;
	}

	void setData(int a) {
		nr = a;
	}

};
