#include "Repo.h"

Repo::Repo() {
	this->n = 0;
}
Repo::~Repo() {
	this->n = 0;
}
void Repo::addProdus(Produs s) {
	this->produse[this->n++] = s;
}

int Repo::size() {
	return this->n;
}

Produs* Repo::getAll() {
	return this->produse;
}