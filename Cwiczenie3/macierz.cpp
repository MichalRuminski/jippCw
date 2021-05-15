#include"macierz.h"

Macierz::Macierz(){

}

Macierz::Macierz(float m[SIZE][SIZE]){
    for(int i =0; i < SIZE; i++){
        for(int j = 0; j <SIZE; j++){
            mac[i][j] = m[i][j];
        }
    }
}

void Macierz::set(int i, int j, float val){
    mac[i][j]= val;
}

float Macierz::get(int i, int j){
    return mac[i][j];
}

std::ostream& operator<< (std::ostream &os, Macierz m){
    for(int i =0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
        os << m.get(i, j) << '|';
        }
        
        os << std::endl;
    }

    return os;
}
