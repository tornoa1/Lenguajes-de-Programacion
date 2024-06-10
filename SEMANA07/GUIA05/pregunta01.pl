%hechos
sintoma_de(gripe, fiebre).
sintoma_de(gripe, tos).
sintoma_de(anemia, cansancio).

alivia(vitaminas, cansancio).
alivia(aspirinas, fiebre).
alivia(jarabe, tos).

enfermo_de(manuel, gripe).

tiene_sintoma(alicia, cansancio).

%reglas
recetar_a(Paciente, Medicamento) :-
    enfermo_de(Paciente, Enfermedad),
    sintoma_de(Enfermedad, Sintoma),
    alivia(Medicamento, Sintoma).

enfermo_de(alicia, Enfermedad) :-
    tiene_sintoma(alicia, Sintoma),
    sintoma_de(Enfermedad, Sintoma).

recetar_a(alicia, Medicamento) :-
    tiene_sintoma(alicia, Sintoma),
    alivia(Medicamento, Sintoma).
