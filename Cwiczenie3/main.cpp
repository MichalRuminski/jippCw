#include <cstdlib>
#include <iostream>
#include "macierz.h"


using namespace std;

int main(){
    srand(time(0));
    Macierz m1, m2;
    for(int i =0; i < ROZMIAR; i++){
        for(int j =0; j < ROZMIAR; j++){
            m1.set(i,j, rand() % 4); 
            m2.set(i,j, rand() % 4); 
        }
    }
    Macierz m3;
    cout << m1;
    cout << endl;
    cout << m2 << endl;

    Macierz m4 = m1 * m2;

    cout << m4;
    cin >> m3;

    cout << m3;
    return 0;
}
