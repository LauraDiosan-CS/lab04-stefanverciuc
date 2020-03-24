#include "produs.h"
#include "Repo.h"
#include <assert.h>
#include <iostream>
#include "service.h"

using namespace std;

void test()
{
    char nume[] = "biscuiti",nume1[]="papa";
    int data=5;
    int pret=23;
    Produs p(nume, data, pret);
    Produs q(nume1, data, pret);
    
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


    //test service
    Repo k;
    Service s(k);
    
    s.addProdus(nume1,data,pret);
    
    assert(s.size() == 1);
    a = s.getAll();
    assert(a[0] == q);

    s.modificare(1, nume, data, pret);
    a = s.getAll();
    assert(a[0] == p);

    s.delete_produs(1);
    assert(s.size() == 0);



    cout << "Run test"<<'\n';
}
    


