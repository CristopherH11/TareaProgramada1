#ifndef ARREGLOENVIOS_H;
#define ARREGLOENVIOS_H;

#include "tipoEnvio.h"
#include <vector>

using namespace std;

class arregloEnvios {

    vector<tipoEnvio *> totaldeEnvios;

    public:
        arregloEnvios();
        ~arregloEnvios();

        void agregarEnvio(tipoEnvio *envio);
        float obtenerTotalCosto(); 

};

#endif