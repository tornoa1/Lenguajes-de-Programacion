-- Escriba una función que reciba un número entero y una lista. 
-- Si el numero entero es par, devolver una nueva lista que contenga la lista inicial y el numero entero ingresado. 
-- Si no, devolver la lista inicial.

listaNumeros :: [Int] = [1, 2, -3, 4, -5, 6, 7, -8, 9]

agregarNumero :: [Int] -> Int -> [Int]
agregarNumero listaNumeros n =
    if mod n 2 /= 0
        then
            listaNumeros
        else
            listaNumeros ++ [n]