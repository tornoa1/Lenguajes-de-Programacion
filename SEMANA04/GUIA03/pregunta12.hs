type Curso = (String, String, String, Int, Float)

listaCursos :: [Curso]
listaCursos = [
    ("Sistemas", "Ingeniería de Software", "Lenguajes de Programación", 40, 12.34),
    ("Sistemas", "Ingeniería de Software", "EDA", 38, 40.34),
    ("Sistemas", "Ingeniería de Software", "Ingenieria de Datos", 30, 10.15),
    ("Industrial", "Investigación de Operaciones", "Simulación de Procesos", 42, 30.34) ,
    ("Industrial", "Operaciones y Cadena de Suministros", "Gestión de la Demanda", 40, 12.34),
    ("Civil", "Construcción", "Tecnología de Construcción I", 42, 15.77)]

-- A
alumnosMatriculados :: [Curso] -> String -> Int 
alumnosMatriculados listaCursos carrera = sum [x | (c, _, _, x, _) <- listaCursos, c == carrera]

-- B
porcentajeCurso :: Curso -> String -> String -> Float
porcentajeCurso listaCursos carrera area
    | [ porcentaje | (c, a, _, _, porcentaje) <- listaCursos, c == carrera && a == area] = porcentaje

-- cursoConMayorDesaprobados :: [Curso] -> String -> String -> Float -> Float
-- cursoConMayorDesaprobados listaCursos carrera area mayor =
--     if null listaCursos
--         then
--             mayor
--         else
--             cursoConMayorDesaprobados
--             (tail listaCursos)
--             carrera
--             area
--             if (mayor > )
    


