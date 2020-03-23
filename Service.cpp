#include "service.h"

Service::Service() {
	
}

Service::Service(const Repo& r) {
	this->repo = r;
}



void Service::addProdus(char* nume,int data,int pret) {
	Produs p(nume, data, pret);

	this->repo.addProdus(p);
}

int Service::size() {
	return this->repo.size();
}

Produs* Service::getAll() {
	return this->repo.getAll();
}

void Service::delete_produs(int j) {
	
	
	this->repo.delete_produs(j);

}

void Service::modificare(int i, char* nume,int data,int pret)
{
	Produs p(nume, data, pret);
	this->repo.modificare(i, p);
}