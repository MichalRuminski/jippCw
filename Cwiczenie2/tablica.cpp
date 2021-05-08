#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>

#include "tablica.h"


Tablica::Tablica() : Tablica::Tablica(10){
/*  
    this->n = 10;
    this->wsk = new int[10];
    if(this->wsk){
        int i = 0;
        while(i < this->n){
            this->wsk[i] = 0;
            i++;
        }   
    }
    */
}


Tablica::Tablica(int n){
    
    this->n = n;
    this->wsk = new int[n];
    if(this->wsk){
        int i = 0;
        while(i < this->n){
            this->wsk[i] = 0;
            i++;
        }   
    }
}

Tablica::Tablica(const Tablica &t){
    
    this->n = t.n;
    this->wsk = new int[this->n];
    if(this->wsk){
    int i = 0;
    while(i < t.n){
        this->wsk[i] = t.wsk[i];
        i++;
    }}
}

Tablica::~Tablica(){
    delete[] wsk;
}

int Tablica::get(int i){
    if(i < n)
        return this->wsk[i];
}

void Tablica::set(int i, int value){
    if(i < n)
        this->wsk[i] = value;
}


void Tablica::losuj(){
    int i = 0;
    while (i < n)
    {
        this->wsk[i] = rand() % 10 + 1;
        i++;
    }
}

void Tablica::wypisz(){
    for(int i = 0; i < n; i++){
        std::cout << "Element " << i << ": " << wsk[i] << " ";
        
    }
    std::cout << std::endl;
}

float Tablica::avg(){
    int s = 0;
    for(int i = 0; i < n; i++){
        s +=wsk[i];
    }
    return s/(float)n;
    }

double Tablica::geom(){
    int il = 1;
    for(int i = 0; i < n; i++){
        il *= wsk[i];
    }
    
    return pow(il, 1.0f/n);
}

int Tablica::minimum(){
    int min = wsk[0];
    for(int i = 1; i < n; i++){
        if(min > wsk[i]){
            min = wsk[i];
        }
    }
    return min;
}

int Tablica::maksimum(){
    int max = wsk[0];
    for(int i = 1; i < n; i++){
        if(max < wsk[i]){
            max = wsk[i];
        }
    }
    return max;
}

void Tablica::sortuj(){
    int max = 0;
    int tmp;
    for(int i = 0; i < n; i++){
        max = i;
        for(int j = i +1; j < n; j++){
            if(wsk[i] > wsk[j]){
                tmp = wsk[i];
                wsk[i] = wsk[j];
                wsk[j] = tmp;
            }
        }
    }
}

float Tablica::mediana(){
    this->sortuj();
    if(n%2 > 0){
        return wsk[n/2];
    }
    return  (wsk[n/2] + wsk[n/2 -1])/2.0f;  
}
