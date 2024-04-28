-- Escriba una función que reciba como entrada un número entero, 
-- si dicho valor no se encuentra en una la lista (que recibe como argumento de entrada), 
-- añadirlo, caso contrario eliminarlo de la lista. Finalmente imprimir la lista ordenada ascendentemente. 
-- Puede utilizar la función sort.

import Data.List (sort)

listaNumeros :: [Int] = [7, 2, 3, 4, 8, 6, 1, 5]

listaOrdenada :: Int -> [Int] -> [Int] -> [Int]
listaOrdenada n listaNumeros nuevaLista =
    if null listaNumeros 
        then
            sort nuevaLista
        else
            if ((head listaNumeros) == n)
                then
                    listaOrdenada n (tail listaNumeros) nuevaLista
                else
                    listaOrdenada n (tail listaNumeros) (nuevaLista ++ [head listaNumeros])