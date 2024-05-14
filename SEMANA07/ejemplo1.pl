%hechos
humano(socrates).
humano(pepito).
dios(kratos).
amigos(socrates, pepito).

%reglas
mortal(Persona) :- humano(Persona).
relacion(X, Y) :- amigos(X, Y);
                  amigos(Y, X).
