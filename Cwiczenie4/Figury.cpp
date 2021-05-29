#include <iostream>
#include "Figury.h"

Bryla::Bryla(){};
Bryla::Bryla(double r, double h){ this->r = r; this->h = h; }
void Bryla::wypiszInfo(){ std::cout << "Bryla:\n" << "Wysokosc: " << h << "\nPromien: " << r << "\n";}
Bryla::~Bryla(){};

Walec::Walec(double r, double h) : Bryla(r,h){}
Walec::~Walec(){ std::cout << "niszcze walec\n";}
double Walec::obliczObjetosc(){ return PI*r*r*h;}
void Walec::wypiszInfo(){ std::cout << "Walec:\n" << "Wysokosc: " << h << "\nPromien: " << r << "\n";}

Stozek::Stozek(double r, double h) : Bryla(r,h){}
Stozek::~Stozek(){std::cout << "niszcze stozek\n";}
double Stozek::obliczObjetosc(){ return (PI*r*r)/3*h;}
void Stozek::wypiszInfo() { std::cout << "Stozek:\n" << "Wysokosc: " << h << "\nPromien: " << r << "\n";}

StozekSciety::StozekSciety(double r, double h, double R) : Stozek(r,h){this->R = R;}
StozekSciety::~StozekSciety(){std::cout << "niszcze stozek sciety\n";}
double StozekSciety::obliczObjetosc(){return (PI/3)*h*(R*R + R*r + r*r);}
void StozekSciety::wypiszInfo(){ std::cout << "Stozek sciety:\n" << "Wysokosc: " << h 
                                    << "\nPromien: " << r << "\nPromien scietej czesci: " << R <<  "\n";}



