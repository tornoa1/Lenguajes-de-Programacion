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
cursoCarreraArea :: [Curso] -> String -> String -> [Float]
cursoCarreraArea listaCursos carrera area = 
    [ porcentaje | (c, a, _, _, porcentaje) <- listaCursos, c == carrera, a == area]

cursoConMayorDesaprobados :: [Float] -> Float -> Float
cursoConMayorDesaprobados [] mayor = mayor
cursoConMayorDesaprobados (x:xs) mayor
    | x > mayor = cursoConMayorDesaprobados xs x
    | otherwise = cursoConMayorDesaprobados xs mayor

