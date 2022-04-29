#include "arregloEnvios.h"

arregloEnvios::arregloEnvios(){

}

arregloEnvios::~arregloEnvios(){
   for (tipoEnvio* envio : this->totaldeEnvios)
    {
        delete envio;
    } 

}

void arregloEnvios::agregarEnvio(tipoEnvio *envio) {
    this->totaldeEnvios.push_back(envio);
}

float arregloEnvios::obtenerTotalCosto() {
    float resultado = 0;

    for (tipoEnvio* envio : this->totaldeEnvios)
    {
        resultado += envio->calculodeCosto();
    }

    return resultado;
}