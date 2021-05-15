#include <cstdlib>
#include <iostream>
#include "macierz.h"

int main(){
    srand(time(0));
    Macierz m1, m2;
    for(int i =0; i < SIZE; i++){
        for(int j =0; j < SIZE; j++){
            m2.set(i,j, rand() % 11); 
        }
    }
    std::cout << m2;
    Macierz m3(m2);

    std::cout << m2;
    std::cout << m3;

    return 0;
}
