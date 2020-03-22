//liudufv

#include <iostream>
#include "test.h"
#include "produs.h"
#include "Repo.h"

using namespace std;


int main()
{
    
    test();
    

    
    Repo r;
    int i = 1;

    while (i)
    {
        std::cout << "Scrie 1 pentru citire,2 afisare,3 pntru stergere,4 pentru modificare, 0 exit: ";
        std::cin >> i;
        if (i == 1)
        {
            int n;
            std::cout << "Cate produse=";
            std::cin >> n;
            for (int k = 1; k <= n; k++)
            {
                
                char nume[100];
                int data;
                int pret;

                std::cout << "Dati numele ";
                std::cin >> nume;
                std::cout << "Dati data ";
                std::cin >> data;
                std::cout << "Dati pret ";
                std::cin >> pret;
                Produs p(nume, data, pret);
                
                r.addProdus(p);
            }
        }
        if (i == 2)
        {
            Produs* lista;
            lista = r.getAll();
            int n = r.size();
            for (int i = 0; i < n; i++)
                std::cout << lista[i] << " ";
            std::cout << '\n';
        }
        if (i == 3)
        {
            int j;
            cout << "Ce produs stergi?";
            cin >> j;
            r.delete_produs(j);

        }
        if (i == 4)
        {
            int j;
            char nume[100];
            int data;
            int pret;
            cout << "Ce produs modifici?";
            cin >> j;
            cout << "Nume=";
            cin >> nume;
            cout << "Data ";
            cin >> data;
            cout << "Pret ";
            cin >> pret;
            Produs p(nume, data, pret);
            r.modificare(j,p);
        }
    }

    return 0;
    
}

