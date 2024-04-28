-- Escribir una función que reciba como parametros una lista de números enteros y un número entero (n), 
-- devolver la lista filtrada en la que cada elemento cumpla la siguiente condición: < n.

listaNumeros :: [Int] = [1, 3, 4, 5, 8, 9, 10]

filtrarLista :: Int -> [Int] -> [Int] -> [Int]
filtrarLista n listaNumeros listaFiltrada =
    if null listaNumeros
        then
            listaFiltrada
        else
            filtrarLista
            n
            (tail listaNumeros)
            (if (head listaNumeros) > n
                then
                    listaFiltrada ++ [head listaNumeros]
                else
                    listaFiltrada)
