#include <iostream>
#include <vector>
#include "Tvar.h"
#include "Kruh.h"
#include "Ctverec.h"

void vypisInfo(Tvar* t) {
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Typ tvaru: " << t->jmeno() << std::endl;
    std::cout << "  Obvod: " << t->obvod() << std::endl;
    std::cout << "  Obsah: " << t->obsah() << std::endl;
}

int main()
{
    std::cout << "--- Program Tvary ---\n" << std::endl;

    Kruh k1(5.0f);
    Ctverec c1(8.0f);
    
    Tvar* k2 = new Kruh(2.5f);

    std::vector<Tvar*> tvary;
    
    tvary.push_back(&k1);
    tvary.push_back(&c1);
    tvary.push_back(k2);

    for (Tvar* t : tvary) {
        vypisInfo(t);
    }
    std::cout << "------------------------------------" << std::endl;
    
    delete k2; 

    return 0;
}