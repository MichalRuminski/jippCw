#include <iostream>
#include "Figury.h"

int main(){
    Bryla *bryly[5];
    bryly[0] = new Walec(2,2);
    bryly[1] = new Walec(1,2);
    bryly[2] = new Stozek(1,2);
    bryly[3] = new Stozek(2,5);
    bryly[4] = new StozekSciety(1,2,0.5);

    for(int i =0; i < 5; i++){
        bryly[i]->wypiszInfo();
        std::cout << "Objetosc = " << bryly[i]->obliczObjetosc() << std::endl;
        std::cout << std::endl;
    }

    for(int i = 0; i < 5; i++){
        delete bryly[i];
    }

    return 0;
}