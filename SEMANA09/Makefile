all: build

build:
	g++ -c pregunta06.cpp
	g++ -c main.cpp
	g++ pregunta06.o main.o -o main
	@echo "Ejecutando..."
	.\main.exe

clean_exe:
	rm *.exe

clean_o:
	rm *.o