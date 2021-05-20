#include <iostream>

const int ROZMIAR = 6;
class Macierz {
    public:
    Macierz();
    Macierz(int rozmiar, float m[ROZMIAR][ROZMIAR]);

    void set(int i, int j, float val);
    float get(int i, int j);
    Macierz operator- (Macierz m1);
    Macierz operator+ (Macierz m1);
    Macierz operator* (Macierz m1);
    float& operator() (int i, int j);
    Macierz operator~ ();
    friend Macierz operator* (float f, Macierz m);
    friend std::ostream&  operator<< (std::ostream &os, Macierz m);
    friend std::istream& operator>> (std::istream &is, Macierz &m);

    private:
    int n;
    float mac[ROZMIAR][ROZMIAR];
};