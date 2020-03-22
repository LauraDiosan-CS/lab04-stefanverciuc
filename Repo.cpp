#include "Repo.h"

Repo::Repo() {
	this->n = 0;
}

/*Repo::~Repo() {
	this->n = 0;
}*/

void Repo::addProdus(Produs s) {
	this->produse[this->n++] = s;
}

int Repo::size() {
	return this->n;
}

Produs* Repo::getAll() {
	return this->produse;
}

void Repo::delete_produs(int i){
	int m = this->n;
	Produs* p;
	p = this->produse;
	i--;
	for (i; i < m; i++)
		p[i] = p[i + 1];
	this->n--;

	
}

void Repo::modificare(int i, Produs p)
{
	this->produse[i - 1] = p;
}