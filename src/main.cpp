#include "arregloEnvios.h"
#include "enviosFedEx.h"
#include "enviosPostal.h"
#include "tipoEnvio.h"
#include <iostream>

using namespace std;

int main(){
    arregloEnvios* envios = new arregloEnvios();

    enviosFedEx* envio1 = new enviosFedEx(8, 85);
    envios->agregarEnvio(envio1);

    enviosFedEx* envio2 = new enviosFedEx(9, 7200);
    envios->agregarEnvio(envio2);

    enviosPostal* envio3 = new enviosPostal(2, 5, 171);
    envios->agregarEnvio(envio3);

    enviosPostal* envio4 = new enviosPostal(1, 1, 880);
    envios->agregarEnvio(envio4);

    cout << "El total de costo de los envios es:" << envios->obtenerTotalCosto();

    delete envios;

}