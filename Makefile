all:
	mkdir -p bin
	g++ -g -c --std=c++17 src/tipoEnvio.cpp -o bin/tipoEnvio.o
	g++ -g -c --std=c++17 src/enviosPostal.cpp -o bin/enviosPostal.o
	g++ -g -c --std=c++17 src/enviosFedEx.cpp -o bin/enviosFedEx.o
	g++ -g -c --std=c++17 src/arregloEnvios.cpp -o bin/arregloEnvios.o
	g++ -g -o bin/envios bin/tipoEnvio.o bin/enviosPostal.o bin/enviosFedEx.o bin/arregloEnvios.o

test:
	mkdir -p bin
	g++ -g -c --std=c++17 src/tipoEnvio.cpp -o bin/tipoEnvio.o
	g++ -g -c --std=c++17 src/enviosPostal.cpp -o bin/enviosPostal.o
	g++ -g -c --std=c++17 src/enviosFedEx.cpp -o bin/enviosFedEx.o
	g++ -g -c --std=c++17 src/arregloEnvios.cpp -o bin/arregloEnvios.o
	g++ -g -c --std=c++17 tests/tests_enviosFedEx_calculodeCosto.cpp -o bin/tests_enviosFedEx_calculodeCosto.o
	g++ -g -c --std=c++17 tests/tests_enviosPostal_calculodeCosto.cpp -o bin/tests_enviosPostal_calculodeCosto.o
	g++ -g -o bin/tests bin/tests_enviosFedEx_calculodeCosto.o bin/tests_enviosPostal_calculodeCosto.o bin/tipoEnvio.o bin/enviosFedEx.o bin/enviosPostal.o bin/arregloEnvios.o -lgtest -lgtest_main -lpthread

clean:
	rm -Rf bin