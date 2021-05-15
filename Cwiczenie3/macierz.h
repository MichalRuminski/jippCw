#include <iostream>

const int SIZE = 6;
class Macierz {
    public:
    Macierz();
    Macierz(float m[SIZE][SIZE]);

    void set(int i, int j, float val);
    float get(int i, int j);
    Macierz friend operator- (Macierz m1, Macierz m2);
    friend Macierz operator+ (Macierz m1, Macierz m2);;
    Macierz friend operator* (Macierz m1, float f);
    friend std::ostream&  operator<< (std::ostream &os, Macierz m);

    private:
    int n;
    float mac[SIZE][SIZE];
};