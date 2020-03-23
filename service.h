#pragma once
#include "Repo.h"

class Service {
private:
	Repo repo;
public:
	Service();
	Service(const Repo& r);
	//~Repo();
	void addProdus(char* ,int,int);
	int size();
	Produs* getAll();
	void delete_produs(int);
	void modificare(int, char* ,int, int);
};

