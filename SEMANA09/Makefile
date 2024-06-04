all: build

build:
	g++ -c pregunta13.cpp
	g++ -c main.cpp
	g++ pregunta13.o main.o -o main
	@echo "Ejecutando..."
	.\main.exe

clean_exe:
	rm *.exe

clean_o:
	rm *.o