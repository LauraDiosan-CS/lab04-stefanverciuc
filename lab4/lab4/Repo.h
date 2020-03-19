#pragma once
#include "produs.h"

class Repo {
private:
	Produs produse[20];
	int n;
public:
	Repo();
	~Repo();
	void addProdus(Produs s);
	int size();
	Produs* getAll();
};
