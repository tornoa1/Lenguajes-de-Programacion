all: build

build:
	@echo "Construyendo app"
	g++ -c .\operaciones.cpp
	g++ -c .\funciones.cpp
	g++ operaciones.o funciones.o -o funciones
	.\funciones.exe

clean:
	@echo "Limpiando archivos"
	rm *.o

clean_exe:
	@echo "gaaa"
	rm *.exe