--Escriba una funcion llamada 'filtrarEnteros' que reciba como entrada una lista y una función anónima que retorne un booleano, y filtre los elementos de la lista de enteros de acuerdo a esta función.

listaNumeros :: [Int] = [1, 3, 5, 7, 9]

filtrarEnteros :: [Int] -> (Int -> Bool) -> [Int]
filtrarEnteros lista f = filter f lista
