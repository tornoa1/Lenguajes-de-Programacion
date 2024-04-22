--Escriba una función que reciba un numero entero y devuelva una lista con su tabla de multplicar del 1 al 12.

tablaMultiplicar :: Int -> Int -> [Int] -> [Int]
tablaMultiplicar n acc nuevaLista =
    if acc > 12
        then
            nuevaLista
        else
            tablaMultiplicar n (acc + 1) (nuevaLista ++ [n * acc])