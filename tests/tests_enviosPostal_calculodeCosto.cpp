#include <gtest/gtest.h>
#include "../src/enviosPostal.h"

TEST(Test_EnviosPostal_CalculodeCosto, Test_CalculoCaso1y1){

    enviosPostal envio1(1, 1, 100);

    float actual = envio1.calculodeCosto();
    float esperada = 30.00;

    EXPECT_EQ(esperada, actual);

}

TEST(Test_EnviosPostal_CalculodeCosto, Test_CalculoCaso1y2){

    enviosPostal envio1(1, 5, 100);

    float actual = envio1.calculodeCosto();
    float esperada = 45.00;

    EXPECT_EQ(esperada, actual);

}

TEST(Test_EnviosPostal_CalculodeCosto, Test_CalculoCaso1y3){

    enviosPostal envio1(1, 10, 100);

    float actual = envio1.calculodeCosto();
    float esperada = 60.00;

    EXPECT_EQ(esperada, actual);

}

TEST(Test_EnviosPostal_CalculodeCosto, Test_CalculoCaso2y1){

    enviosPostal envio1(2, 1, 100);

    float actual = envio1.calculodeCosto();
    float esperada = 2.80;

    EXPECT_EQ(esperada, actual);

}

TEST(Test_EnviosPostal_CalculodeCosto, Test_CalculoCaso2y2){

    enviosPostal envio1(2, 5, 100);

    float actual = envio1.calculodeCosto();
    float esperada = 3.50;

    EXPECT_EQ(esperada, actual);

}

TEST(Test_EnviosPostal_CalculodeCosto, Test_CalculoCaso2y3){

    enviosPostal envio1(2, 10, 100);

    float actual = envio1.calculodeCosto();
    float esperada = 7.50;

    EXPECT_EQ(esperada, actual);

}

TEST(Test_EnviosPostal_CalculodeCosto, Test_CalculoCaso3){

    enviosPostal envio1(3, 1, 100);

    float actual = envio1.calculodeCosto();
    float esperada = 1.20;

    EXPECT_EQ(esperada, actual);

}