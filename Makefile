all:
	mkdir -p bin
	g++ g -c --std=c++17 src/tipoEnvio.cpp -o bin/tipoEnvio
	g++ g -c --std=c++17 src/enviosPostal.cpp -o bin/enviosPostal
	g++ g -c --std=c++17 src/enviosFedEx.cpp -o bin/enviosFedEx
	g++ g -c --std=c++17 src/arregloEnvios.cpp -o bin/arregloEnvios

	
tests:
	mkdir -p bin
	g++ src/holamundo.cpp -o bin/v

clean:
	rm -Rf bin