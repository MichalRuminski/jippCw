#include"macierz.h"

Macierz::Macierz(){
    n = ROZMIAR;
    for(int i =0; i < ROZMIAR; i++){
        for(int j = 0; j <ROZMIAR; j++){
            mac[i][j] = 0;
        }
    }
}

Macierz::Macierz(int rozmiar, float m[ROZMIAR][ROZMIAR]){
    n = rozmiar;
    for(int i =0; i < ROZMIAR; i++){
        for(int j = 0; j <ROZMIAR; j++){
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

Macierz Macierz::operator- (Macierz m1){
    Macierz wynik;
    for(int i = 0; i < ROZMIAR; i ++){
        for(int j = 0; j < ROZMIAR; j++){
            wynik.set(i,j,(this->get(i,j) - m1.get(i,j)));
        }
    }
    return wynik;
}

Macierz Macierz::operator+ (Macierz m1){
    Macierz wynik;
    for(int i = 0; i < ROZMIAR; i ++){
        for(int j = 0; j < ROZMIAR; j++){
            wynik.set(i,j,(this->get(i,j) + m1.get(i,j)));
        }
    }
    return wynik;
}

Macierz Macierz::operator* (Macierz m1){
    Macierz wynik;
    for(int i = 0; i < ROZMIAR; i++){
        for(int j = 0; j < ROZMIAR; j++){
            float tmp =0;
            for(int k = 0; k < ROZMIAR; k++){
                tmp += this->mac[i][k] * m1.get(k,j);
            }
                wynik.set(i,j,tmp);
        }
    }
    return wynik;
}

Macierz operator* (float f, Macierz m){
    Macierz wynik;
    for(int i = 0; i < ROZMIAR; i ++){
        for(int j = 0; j < ROZMIAR; j++){
            wynik.set(i,j,m.get(i,j) * f);
        }
    }
    return wynik;
}

float& Macierz::operator() (int i, int j){
    return this->mac[i][i];
}

Macierz Macierz::operator~ (){
    Macierz wynik = Macierz(this->n, this->mac);
    for(int i = 0; i < n; i++){
        for(int j=0; j< n; j++){
            wynik.set(j,i,this->get(i,j));
        }
    }
    return wynik;
}

std::ostream& operator<< (std::ostream &os, Macierz m){
    for(int i =0; i < ROZMIAR; i++){
        for(int j = 0; j < ROZMIAR; j++){
        os << m.get(i, j) << '|';
        }
        os << std::endl;
    }
    return os;
}

std::istream& operator>> (std::istream &is, Macierz &m){
    float x= 0;
    for(int i =0; i < ROZMIAR; i++){
        for(int j = 0; j < ROZMIAR; j++){
         is >> x;
         m.set(i,j, x);
        }
    }
    return is;
}
