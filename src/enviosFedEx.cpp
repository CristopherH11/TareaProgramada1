#include "enviosFedEx.h"

enviosFedEx::enviosFedEx(int peso, float distancia){
    this->peso = peso;
    this->distancia = distancia;

}

float enviosFedEx::calculodeCosto(){
    float resultado = 35;
    if (peso>10){
        resultado+=10;

    }
    if (distancia>500){
        resultado+=15;

    }
    return resultado;
}