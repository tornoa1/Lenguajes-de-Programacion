--Escriba una función que elimine los elementos duplicados de la siguiente lista de números enteros [1, 1, 2, 3, 3, 4, 4, 5].

listaNumeros :: [Int] = [1, 1, 2, 3, 3, 4, 4, 5]

validarExistencia :: [Int] -> Int -> Bool
validarExistencia lista n =
    if null lista
        then
            False
        else
            if n == (head lista)
                then
                    True
                else
                    validarExistencia (tail lista) n

listaSinDuplicados' :: [Int] -> [Int]
listaSinDuplicados' listaNumeros = listaSinDuplicados listaNumeros []

listaSinDuplicados :: [Int] -> [Int] -> [Int]
listaSinDuplicados listaNumeros nuevaLista =
    if null listaNumeros
        then
            nuevaLista
        else
            if (validarExistencia nuevaLista (head listaNumeros)) == False
                then
                    listaSinDuplicados (tail listaNumeros) (nuevaLista ++ [head listaNumeros]) 
                else
                    listaSinDuplicados (tail listaNumeros) nuevaLista
                        