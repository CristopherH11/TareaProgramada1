#ifndef TIPOENVIO_H;
#define TIPOENVIO_H;

    class tipoEnvios{
        private:

        int peso;
        
        public:
        virtual ~tipoEnvios();

        virtual float calculodeCosto() = 0;
    };

#endif