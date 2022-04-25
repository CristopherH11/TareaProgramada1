#include "enviosPostal.h"

enviosPostal::enviosPostal(int clase, int peso, float distancia){
    this->clase = clase;
    this->peso = peso;
    this->distancia = distancia; 

}

float enviosPostal::calculodeCosto(){
    switch (clase){
        case 1:
            if (peso < 4){
                return 0.300*distancia;

            }else if(peso < 9){
                return 0.450*distancia;

            }else{
                return 0.600*distancia;

            }

        case 2:
            if (peso < 4){
                return 0.0280*distancia;

            }else if(peso < 9){
                return 0.0350*distancia;

            }else{
                return 0.0750*distancia;

            }

        case 3:
            return 0.0120*distancia;

        default:

    }

}