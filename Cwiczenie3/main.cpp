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
    Macierz m4 = ~m1;
    cout << m1;
    cout << endl;
    cout << m4;
    cout << endl;
    cin >> m3;
    cout << m3 << endl;
    return 0;
}
