
class Tablica{
    public:
    Tablica();
    Tablica(int n);
    Tablica(const Tablica &t);

    ~Tablica();

    int get(int i);
    void set(int i, int value);
    void losuj();
    void wypisz();
    float avg();
    double geom();
    int minimum();
    int maksimum();
    void sortuj();
    float mediana();

    private:
    int *wsk;
    int n;
};