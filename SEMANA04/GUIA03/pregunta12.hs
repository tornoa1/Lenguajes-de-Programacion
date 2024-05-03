type Curso = (String, String, String, Float, Float)
listaCursos :: [Curso]
listaCursos =
("Sistemas"
"Ingeniería de Software", "Lenguajes de Programación", 40, 12.34),
("Sistemas",
"Ingeniería de Software", "EDA", 38, 40.34),
("Industrial"
, "Investigación de Operaciones", "Simulación de Procesos", 42,
30.34) ,
("Industrial", "Operaciones y Cadena de Suministros", "Gestión de la Demanda", 40, 12.34),
("Civil", "Construcción", "Tecnología de Construcción I", 42, 15.77)]
-- A
alumnosMatriculados :: [Curso] -› String -› Int alumnosMatriculados cursos carrera = sum [x | (c, → _› x, ‹- cursos, c == carreral

-- B
porcentajeDesaprobados :: Curso -› Float
porcentajeDesaprobados ( → → → porcentaje) - porcentaje
cursoConMayorDesaprobados :: [Curso] -> Float -> Float cursoConMayorDesaprobados curso mayor =
if null listacursos
then
mayor
else
cursoConMayorDesaprobados (tail listaCursos)
(if mayor › porcentajeDesaprobados (head listacursos)
then
mayor
else
porcentajeDesaprobados (head listaCursos)