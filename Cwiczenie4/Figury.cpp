#include <iostream>
#include "Figury.h"

Bryla::Bryla(){};
Bryla::Bryla(double r, double h){ this->r = r; this->h = h; }
double Bryla::obliczObjetosc(){return PI*r*r*h;}
void Bryla::wypiszInfo(){ std::cout << "Bryla:\n" << "Wysokosc: " << h << "\nPromien: " << r << "\n";}
Bryla::~Bryla(){};

Walec::Walec(double r, double h) : Bryla(r,h){};
Walec::~Walec(){};
double Walec::obliczObjetosc(){ return PI*r*r*h;}
void Walec::wypiszInfo(){ std::cout << "Walec:\n" << "Wysokosc: " << h << "\nPromien: " << r << "\n";}

Stozek::Stozek(double r, double h) : Bryla(r,h){}
Stozek::~Stozek(){};
double Stozek::obliczObjetosc(){ return (PI*r*r)/3*h;}
void Stozek::wypiszInfo() { std::cout << "Stozek:\n" << "Wysokosc: " << h << "\nPromien: " << r << "\n";}

StozekSciety::StozekSciety(double r, double h, double R) : Stozek(r,h){this->R = R;}
StozekSciety::~StozekSciety(){};
double StozekSciety::obliczObjetosc(){return PI*r*r;}
void StozekSciety::wypiszInfo(){ std::cout << "Stozek sciett:\n" << "Wysokosc: " << h 
                                    << "\nPromien: " << r << "\nPromien scietej czesci: " << R <<  "\n";}



