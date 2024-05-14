%hechos
lenguajes(haskell).
lenguajes(prolog).
lenguajes(python).
lenguajes(cpp).
lenguajes(c).
lenguajes(scratch).
lenguajes(blueprint).

declarativo(haskell).
declarativo(prolog).

procedimental(python).
procedimental(c).
procedimental(cpp).
procedimental(scratch).
procedimental(blueprint).

clases(python).
clases(cpp).
clases(blueprint).

%reglas
funcional(Lenguaje) :- lenguajes(Lenguaje),
                       declarativo(Lenguaje),
                       not(clases(Lenguaje)).

poo(Lenguaje) :- lenguajes(Lenguaje),
                 procedimental(Lenguaje),
                 clases(Lenguaje).
