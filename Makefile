all:
	mkdir -p bin
	g++ -g src/holamundo.cpp -o bin/holamundo

	
version_release:
	mkdir -p bin
	g++ src/holamundo.cpp -o bin/v

clean:
	rm -Rf bin