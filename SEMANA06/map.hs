cuadrado :: Int -> Int
cuadrado x = x * x

cuadradoLista :: [Int] -> [Int]
cuadradoLista lista = map cuadrado lista

listaNumeros :: [String] = ["1", "3", "5", "7", "9"]

convertirStrings :: [String] -> [Int]
convertirStrings listaNumeros = map (\x -> read x :: Int) listaNumeros


notasAlumnos :: [[Float]] = [[11, 14], [10, 11], [18,19], [4,9]]

promedioAlumnos :: [[Float]] -> Float
promedioAlumnos listaNotas = 
    sum (map (\notasAlumnos -> ((notasAlumnos !! 0) + (notasAlumnos !! 1)) / 2) listaNotas) / 
    fromIntegral (length (map (\notasAlumnos -> ((notasAlumnos !! 0) + (notasAlumnos !! 1)) / 2) listaNotas))


porcentajeDesaprobados :: [[Float]] -> Float
porcentajeDesaprobados lista = 
    ((fromIntegral (length (filter
                (\nota -> nota <= 10.5)
                (map 
                    (\notasAlumnos -> ((notasAlumnos !! 0) + (notasAlumnos !! 1)) / 2) 
                    lista))))
    /
    (fromIntegral (length lista))) * 100
    