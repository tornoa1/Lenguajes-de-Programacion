all: build

build:
	g++ -c traveler.cpp
	g++ -c main.cpp
	g++ traveler.o main.o -o main
	@echo "Ejecutando..."
	.\main.exe

clean_exe:
	rm *.exe

clean_o:
	rm *.o