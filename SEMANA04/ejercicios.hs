type Alumno = (String, Float, Float, Float, Float)

listaAlumnos :: [Alumno] = [
    ("Pepito", 19, 12, 11, 17),
    ("Luisito", 20, 6, 8, 9),
    ("Jimena", 16, 16, 14, 12)]

promedioNota :: Alumno -> Float
promedioNota (_, x1, x2, x3, x4) =
    (x1 * 0.20) + (x2 * 0.20) + (x3 * 0.30) + (x4 * 0.40)

promedioSalon :: [Alumno] -> Float -> Float -> Float
promedioSalon listaAlumnos acc cont =
    if null listaAlumnos
        then
           acc / cont
        else
            (promedioSalon (tail listaAlumnos) (acc + promedioNota (head listaAlumnos)) (cont + 1))

getNombre :: Alumno -> String
getNombre (x, _, _, _, _) = x

mayorNota' :: [Alumno] -> String
mayorNota' listaAlumnos = mayorNota listaAlumnos 0 " "

mayorNota :: [Alumno] -> Float -> String -> String
mayorNota listaAlumnos mayor nombre =
    if null listaAlumnos
        then
            nombre
        else
            mayorNota (tail listaAlumnos)
            (if mayor > promedioNota (head listaAlumnos)
                then 
                    mayor
                else
                    promedioNota (head listaAlumnos))
            (if mayor > promedioNota (head listaAlumnos)
                then
                    nombre
                else
                    getNombre (head listaAlumnos))

-- promedioSalon :: [Alumno] -> Float -> Float -> Float
-- promedioSalon listaAlumnos acc cont
--     | null listaAlumnos = acc / cont
--     | otherwise = (promedioSalon (tail listaAlumnos) (acc + promedioNota (head listaAlumnos)) (cont + 1))
