-- Elaborar una función que calcule el promedio ponderado de las notas (valores del 0 al 20) de un alumno, 
-- luego devuelva una lista con los aprobados (tomar como referencia las condiciones del ejercicio 1). 
-- Utilizar pattern-matching y guards.

type Alumno = (String, Float, Float, Float, Float)

listaAlumnos :: [Alumno] = [
    ("Pepito", 19, 12, 5, 17),
    ("Luisito", 15, 6, 8, 9),
    ("Jimena", 16, 8, 14, 12)]

promedioNota :: Alumno -> Float
promedioNota (_, x1, x2, x3, x4) =
    (x1 * 0.20) + (x2 * 0.20) + (x3 * 0.30) + (x4 * 0.40)

getNombre :: Alumno -> String
getNombre (x, _, _, _, _) = x

listaPromedios :: [Alumno] -> [(String, Float)]
listaPromedios lista = 
    [ (getNombre nota, promedioNota nota) | nota <- lista, promedioNota nota >= 11 ]