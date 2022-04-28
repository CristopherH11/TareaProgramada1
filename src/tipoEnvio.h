#ifndef TIPOENVIO_H
#define TIPOENVIO_H

    class tipoEnvio{
        protected:
        
        float distancia;
        int peso;
        
        public:
        virtual ~tipoEnvio();

        virtual float calculodeCosto() = 0;
    };

#endif 