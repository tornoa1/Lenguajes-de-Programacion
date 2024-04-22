-- Escribir una función que devuelva True si todos los elementos, 
-- de una lista que se entregue como argumento de entrada, son mayores que 0, o False en caso contrario. 
-- Debe utilizar tail recursion.

listaNumeros :: [Int] = [1, 2, 3, 4, -5, 6, 7, 8, 9]

mayorACero :: [Int] -> Int -> Bool
mayorACero listaNumeros n =
    if null listaNumeros
        then
            True
        else
            if (head listaNumeros) < 0
                then
                    False
                else
                    mayorACero (tail listaNumeros) n