#ifndef ENVIOPOSTAL_H
#define ENVIOPOSTAL_H

#include "tipoEnvio.h"

class enviosPostal : public tipoEnvio {
        int clase;

        public:

        enviosPostal(int clase, int peso, float distancia);
        virtual float calculodeCosto();

    };

#endif 