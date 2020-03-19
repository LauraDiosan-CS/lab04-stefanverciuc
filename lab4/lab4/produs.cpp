#include "produs.h"
#include <iostream>


using namespace std;

Produs::Produs() {
	this->nume = NULL;
	this->data = 0;
	this->pret = 0;
}

Produs::Produs(char* nume, int data ,int pret)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, 1 + strlen(nume), nume);
	this->data = data;
	this->pret = pret;
}

Produs::Produs(const Produs& s) {
	//cout << "copy constructor" << endl;
	this->nume = new char[strlen(s.nume) + 1];
	strcpy_s(this->nume, 1 + strlen(s.nume), s.nume);
	this->data = s.data;
	this->pret = s.pret;
}

Produs::~Produs() {
	if (this->nume) 
	{	
		delete[] this->nume;
		this->nume = NULL;
	}
}

char* Produs::getNume() {
	return this->nume;
}

int Produs::getData() {
	return this->data;
}

int Produs::getPret() {
	return this->pret;
}


void Produs::setNume(char* nume)
{
	if (this->nume) {
		delete[] this->nume;
	}
	this->nume = new char[strlen(nume) + 1];
	
	strcpy_s(this->nume, strlen(nume) + 1, nume);
}

void Produs::setData(int data) {
	this->data = data;
}

void Produs::setPret(int pret) {
	this->pret = pret;
}

Produs& Produs::operator=(const Produs& s) {
	this->setNume(s.nume);
	this->setData(s.data);
	this->setPret(s.pret);
	return *this;
}



bool Produs:: operator==(const Produs& s) {
	return strcmp(this->nume, s.nume) == 0 ;
}

ostream& operator<<(ostream& os, const Produs& s)
{
	os << s.nume << " " << s.data<<" "<<s.pret;
	return os;
}
