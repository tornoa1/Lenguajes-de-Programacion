-- Elabora una función que reciba una lista de tuplas de 3 valores: nombre del curso (String), seccion (Int) y la nota (Float). El programa además deberá recibir el nombre de un curso (String) y deberá calcular el promedio de notas de todas las secciones correspondientes a ese curso.

listaCursos :: [(String, Int, Float)] = [("IoT", 503, 20.0), ("LP", 602, 13.0), ("GP", 902, 16.0), ("SIE", 701, 19.0), ("SSD", 703, 18.0), ("IoT", 503, 16.0), ("GP", 902, 16.0), ("SSD", 703, 18.0)]

notasDeCurso :: [(String, Int, Float)] -> String -> [Float]
notasDeCurso listaCursos nombreCurso =
    map (\(_, _, nota) -> nota) (filter (\(curso, _, _) -> curso == nombreCurso) listaCursos)

promedioNotasCurso :: [(String, Int, Float)] -> String -> Float
promedioNotasCurso listaCursos nombreCurso =
    sum(map (\(_, _, nota) -> nota)  (filter (\(curso, _, _) -> curso == nombreCurso) listaCursos)) / 
    fromIntegral (length (map (\(_, _, nota) -> nota)  (filter (\(curso, _, _) -> curso == nombreCurso) listaCursos)))
