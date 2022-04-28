#ifndef ENVIOSFEDEX_H
#define ENVIOSFEDEX_H

#include "tipoEnvio.h"

    class enviosFedEx : public tipoEnvio {
        

        public:

        enviosFedEx(int peso, float distancia);
        virtual float calculodeCosto(); 

    };

#endif