#ifndef ENVIOFEDEX_H;
#define ENVIOFEDEX_H;

#include "tipoEnvio.h"

    class enviosFedEx : public tipoEnvio {
        

        public:

        enviosFedEx(float distancia, int peso);
        virtual float calculodeCosto(); 

    };

#endif