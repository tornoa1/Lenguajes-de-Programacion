type Alumno = (String, Float, Float, Float, Float)

listaAlumnos :: [Alumno]
listaAlumnos = [
    ("Pepito", 19, 12, 5, 17),
    ("Luisito", 15, 6, 8, 9),
    ("Jimena", 16, 8, 14, 12)]

promedioNota :: Alumno -> Float
promedioNota (_, x1, x2, x3, x4) =
    (x1 * 0.20) + (x2 * 0.20) + (x3 * 0.30) + (x4 * 0.40)

getNombre :: Alumno -> String
getNombre (x, _, _, _, _) = x

alumnosAprobados :: [Alumno] -> [(String, Float)]
alumnosAprobados [] = []
alumnosAprobados (alumno:x)
    | promedioNota alumno >= 11 = (getNombre alumno, promedioNota alumno) : alumnosAprobados x
    | otherwise = alumnosAprobados x
