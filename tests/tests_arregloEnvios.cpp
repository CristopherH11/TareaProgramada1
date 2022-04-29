#include <gtest/gtest.h>
#include "../src/arregloEnvios.h"
#include "../src/enviosFedEx.h"
#include "../src/enviosPostal.h"


TEST(Test_arregloEnvios, Tests_calculoTotal){
    arregloEnvios* envios = new arregloEnvios();

    enviosFedEx* envio1 = new enviosFedEx(5, 100);
    enviosFedEx* envio2 = new enviosFedEx(15, 100);
    enviosPostal* envio3 = new enviosPostal(2, 5, 100);
    enviosPostal* envio4 = new enviosPostal(3, 1, 100);

    envios->agregarEnvio(envio1);
    envios->agregarEnvio(envio2);
    envios->agregarEnvio(envio3);
    envios->agregarEnvio(envio4);
    
    float actual = envios->obtenerTotalCosto();
    float esperada = 84.70;

    EXPECT_EQ(esperada, actual);

}