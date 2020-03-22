#include "produs.h"
#include "Repo.h"
#include <assert.h>
void test()
{
    char nume[] = "biscuiti";
    int data=5;
    int pret=23;
    Produs p(nume, data, pret);
    Repo r;
    r.addProdus(p);
    assert(r.size() == 1);
    assert(p.getPret() == 23);

}