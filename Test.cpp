#include "produs.h"
#include "Repo.h"
#include <assert.h>
#include <iostream>

using namespace std;

void test()
{
    char nume[] = "biscuiti",nume1[]="papa";
    int data=5;
    int pret=23;
    Produs p(nume, data, pret);
    Produs q(nume1, data, pret);
    Produs k;
    Repo r;
    r.addProdus(p);
    //r.addProdus(p);

    assert(r.size() == 1);
    assert(p.getPret() == 23);

    Produs* a;
    r.modificare(1, q);
    a = r.getAll();
    assert(a[0] == q);

    r.delete_produs(1);
    
    assert(r.size() == 0);
    cout << "Run test"<<'\n';
    


}