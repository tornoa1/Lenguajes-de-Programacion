%hechos
genero_de(pelicula1, accion).
genero_de(pelicula2, terror).
genero_de(pelicula3, sci_fi).
genero_de(pelicula4, accion).
genero_de(pelicula5, comedia).
genero_de(pelicula6, drama).
genero_de(pelicula7, sci_fi).
genero_de(pelicula8, comedia).
genero_de(pelicula9, terror).
genero_de(pelicula10, drama).

genero_preferido(juan, accion).
genero_preferido(maria, comedia).
genero_preferido(carlos, sci_fi).
genero_preferido(ana, drama).
genero_preferido(luis, terror).

%reglas
recomendar_peliculas(Usuario, Pelicula) :-
    genero_preferido(Usuario, Genero),
    genero_de(Pelicula, Genero).

peliculas_de_genero(Genero, Pelicula) :-
    genero_de(Pelicula, Genero).

usuarios_que_prefieren(Genero, Usuario) :-
    genero_preferido(Usuario, Genero).
