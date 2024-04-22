listaNumeros :: [Int] = [1, 2, 3, 4, 5, 6, 7, 8, 9]

invertirLista' :: [Int] -> [Int]
invertirLista' listaNumeros = invertirLista listaNumeros []

invertirLista :: [Int] -> [Int] -> [Int]
invertirLista listaNumeros nuevaLista =
    if null listaNumeros
        then
            nuevaLista
        else
            invertirLista (tail listaNumeros) ([head listaNumeros] ++ nuevaLista)
            