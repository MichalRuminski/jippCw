#include <iostream>
#include "tablica.h"
#include <cstdlib>
int main(){

    srand(time(0));
    Tablica t(9);
    Tablica t02(12);
 
    t.losuj();
    t.wypisz();
    t02.losuj();
    t02.wypisz();
    std::cout << t.geom() << std::endl;
    std::cout << t.mediana() << std::endl;
    t.wypisz();
    std::cout << t02.mediana() << std::endl;
    t02.wypisz();
    
    std::cout << "Max w tablicy pierwszej " << t.maksimum() << std::endl;
    std::cout << "Max w tablicy drugiej " << t02.maksimum() << std::endl;
    std::cout << "Min w tablicy pierwszej " << t.minimum() << std::endl;
    std::cout << "Min w tablicy drugiej " << t02.minimum() << std::endl;
    std::cout << "Srednia w tablicy pierwszej " << t.avg() << std::endl;
    std::cout << "Srednia w tablicy drugiej " << t02.avg() << std::endl;

    std::cout << "Srednia geometryczna tablicy pierwszej " << t.geom() << std::endl;
    std::cout << "Srednia geometryczna tablicy drugiej " << t02.geom() << std::endl;

    return 0;
}