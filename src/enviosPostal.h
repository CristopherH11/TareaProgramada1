#ifndef ENVIOPOSTAL_H;
#define ENVIOPOSTAL_H;

#include "tipoEnvio.h"

class enviosPostal : public tipoEnvios {
        int clase;

        public:

        enviosPostal(int clase, int peso);
        virtual float calculodeCosto();

    };

#endif