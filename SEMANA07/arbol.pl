%hechos
hombre(cesar).
hombre(pedro).
hombre(juan).
hombre(eduardo).
mujer(maria).
mujer(rocio).

padre(juan,cesar).
padre(juan,pedro).
padre(juan,maria).
padre(luis,rocio).
padre(eduardo,juan).
padre(eduardo,luis).

%reglas
abuelo(X,Y) :- padre(X,Z),padre(Z,Y).
hermano(X,Y) :- padre(Z,X),padre(Z,Y),X\=Y.
tio(X,Y) :- padre(Z,Y),hermano(Z,X).
sobrino(X,Y) :- padre(Z,Y),hermano(Z,X).
primo(X,Y) :- tio(Z,X),padre(Z,Y).
prima(X,Y) :- padre(A,X),padre(B,Y),hermano(A,B),mujer(X).
