#pragma once
#include <ostream>
using namespace std;

class Produs {
private:
	char* nume;
	int data;
	int pret;
public:
	Produs();
	Produs(char* name, int varsta,int pret);
	Produs(const Produs& s);
	~Produs();
	char* getNume();
	int getData();
	int getPret();
	void setNume(char* nume);
	void setData(int data);
	void setPret(int pret);
	Produs& operator=(const Produs& s);
	
	bool operator==(const Produs& s);
	friend ostream& operator<<(ostream& os, const Produs& s);
};
