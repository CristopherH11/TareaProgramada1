#ifndef ARREGLOENVIOS_H;
#define ARREGLOENVIOS_H;

#include "tipoEnvio.h"
#include <vector>

class arregloEnvios {

    vector<TipoEnvio *> totaldeEnvios;

    public:
        arregloEnvios();
        ~arregloEnvios();

        void agregarEnvio(TipoEnvio *envio);
        float obtenerTotalCosto();

}

#endif