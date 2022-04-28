#include <gtest/gtest.h>
#include "../src/enviosFedEx.h"

TEST(Test_EnviosFedEx_CalculodeCosto, Test_CalculoCasoBasico){

    enviosFedEx envio1(5, 100);

    float actual = envio1.calculodeCosto();
    float esperada = 35.00;

    EXPECT_EQ(esperada, actual);

}

TEST(Test_EnviosFedEx_CalculodeCosto, Test_CalculoCasoPeso){

    enviosFedEx envio1(15, 100);

    float actual = envio1.calculodeCosto();
    float esperada = 45.00;

    EXPECT_EQ(esperada, actual);

}

TEST(Test_EnviosFedEx_CalculodeCosto, Test_CalculoCasoDistancia){

    enviosFedEx envio1(5, 600);

    float actual = envio1.calculodeCosto();
    float esperada = 50.00;

    EXPECT_EQ(esperada, actual);

}

TEST(Test_EnviosFedEx_CalculodeCosto, Test_CalculoCasoPesoyDistancia){

    enviosFedEx envio1(15, 600);

    float actual = envio1.calculodeCosto();
    float esperada = 60.00;

    EXPECT_EQ(esperada, actual);

}