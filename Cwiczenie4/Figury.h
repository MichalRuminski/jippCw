
class Bryla {
    public:
    Bryla();
    Bryla(double r, double h);
    virtual void wypiszInfo();
    virtual double obliczObjetosc() = 0;
    virtual ~Bryla();

    protected:
    double r;
    double h;
    static constexpr double PI = 3.14;
};

class Walec : public Bryla
{
    public:
        Walec(double r, double h);
        virtual void wypiszInfo() override;
        virtual double obliczObjetosc() override;
        ~Walec();
};

class Stozek : public Bryla{
    public:
    Stozek(double r, double h);
    virtual void wypiszInfo() override;
    virtual double obliczObjetosc() override;
    virtual ~Stozek();

};

class StozekSciety : public Stozek{
    public:
    StozekSciety(double r, double h, double R);
    ~StozekSciety();
    virtual void wypiszInfo() override;
    virtual double obliczObjetosc() override;
    private:
    double R;
};