all:
	mkdir -p bin
	g++ g -c --std=c++17 src/tipoEnvio.cpp -o bin/tipoEnvio.o
	g++ g -c --std=c++17 src/enviosPostal.cpp -o bin/enviosPostal.o
	g++ g -c --std=c++17 src/enviosFedEx.cpp -o bin/enviosFedEx.o
	g++ g -c --std=c++17 src/arregloEnvios.cpp -o bin/arregloEnvios.o
	
tests:
	mkdir -p bin
	g++ g -c --std=c++17 src/tipoEnvio.cpp -o bin/tipoEnvio.o
	g++ g -c --std=c++17 src/enviosPostal.cpp -o bin/enviosPostal.o
	g++ g -c --std=c++17 src/enviosFedEx.cpp -o bin/enviosFedEx.o
	g++ g -c --std=c++17 src/arregloEnvios.cpp -o bin/arregloEnvios.o
	g++ g -c --std=c++17 tests/test_enviosFedEx_calculodeCosto.cpp -o bin/test_enviosFedEx_calculodeCosto.o
	g++ g -c --std=c++17 tests/test_enviosPostal_calculodeCosto.cpp -o bin/test_enviosPostal_calculodeCosto.o
	g++ -o bin/tests -lgtest -lgtest_main -lpthread bin/test_enviosFedEx_calculodeCosto.o bin/test_enviosPostal_calculodeCosto bin/tareaprogramada1 bin/tipoEnvio.o bin/enviosFedEx.o bin/enviosPostal.o bin/arregloEnvios.o

clean:
	rm -Rf bin