

#include <iostream>
#include "test.h"
#include "produs.h"
#include "Repo.h"
#include "service.h"

using namespace std;


int main()
{
    
    test();
    

    
    Repo r;
    Service s(r);
    
    int i = 1;

    while (i)
    {
        std::cout << "Scrie 1 pentru citire,2 afisare,3 pentru modificare,4 pentru stergere, 0 exit: ";
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
                s.addProdus(nume, data, pret);
            }
        }
        if (i == 2)
        {
            Produs* lista;
            lista = s.getAll();
            int n = s.size();
            for (int i = 0; i < n; i++)
                std::cout << lista[i] << " ";
            std::cout << '\n';
        }
        if (i == 4)
        {
            
            
            int j;
            
            cout << "Date produs stergi?";
            cin >> j;
            
            
            s.delete_produs(j);

        }
        if (i == 3)
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
            s.modificare(j,nume,data,pret);
        }
    }

    return 0;
    
}

