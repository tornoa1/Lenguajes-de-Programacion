-- Escribir una función que reciba como entrada una lista de numeros enteros y un numero entero, 
-- y devuelva una nueva lista donde cada uno de los elementos de la lista sea multiplicado por el numero entero ingresado.

listaNumeros :: [Int] = [1, 2, -3, 4, -5, 6, 7, -8, 9]

productoLista :: [Int] -> [Int] -> Int -> [Int]
productoLista listaNumeros listaNueva n =
    if null listaNumeros
        then
            listaNueva
        else
            productoLista (tail listaNumeros) (listaNueva ++ [head listaNumeros * n]) n