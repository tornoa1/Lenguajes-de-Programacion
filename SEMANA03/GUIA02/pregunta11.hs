-- Escriba una función que reciba una lista de listas de números enteros 
-- (lista de 2 niveles o dimensiones, tambien conocida como matriz) 
-- y que devuelva una nueva lista con los promedios enteros de cada lista que tengan, por lo menos, 3 elementos.

listaNumeros :: [[Int]]
listaNumeros = [
    [14, 14, 12],
    [14, 17, 15],
    [13, 20, 11]]

promedioLista :: [Int] -> Int -> Int -> Int
promedioLista listaNum sumaParcial conteo=
    if null listaNum
        then
            sumaParcial `div` conteo
        else
            promedioLista (tail listaNum) ((head listaNum) + sumaParcial) (1 + conteo)

promedioMatriz :: [[Int]] -> Int -> [Int]
promedioMatriz listaNum acc =
    if acc > 2
        then
            []
        else
            promedioLista (listaNum !! acc) 0 0 : promedioMatriz listaNum (acc + 1)
