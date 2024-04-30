listaNotas :: [Int] = [11, 19, 06, 17, 14, 20, 18]

calificar :: [Int] -> [String]
calificar notas = [if nota >= 11 then "Aprobado" else "Desaprobado" | nota <- listaNotas]
