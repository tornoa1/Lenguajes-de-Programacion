--Escribir una función que recorra una la lista [1, 3, 4, 5, 8, 9, 10] y la separe en dos sublistas de números pares e impares.

listaNumeros :: [Int] = [1, 3, 4, 5, 8, 9, 10]

listaPares :: [Int] -> [Int] -> [Int]
listaPares listaNumeros listaPar = 
    if null listaNumeros
        then listaPar
    else
        listaPares
        (tail listaNumeros)
        (if mod (head listaNumeros) 2 == 0
            then
                listaPar ++ [head listaNumeros]
            else
                listaPar)

listaImpares :: [Int] -> [Int] -> [Int]
listaImpares listaNumeros listaImpar = 
    if null listaNumeros
        then listaImpar
    else
        listaImpares
        (tail listaNumeros)
        (if mod (head listaNumeros) 2 /= 0
            then
                listaImpar ++ [head listaNumeros]
            else
                listaImpar)

listaDeListas :: [Int] -> [Int] -> [[Int]]
listaDeListas lista1 lista2 = [lista1, lista2]

separarParesImpares :: [Int] -> [[Int]]
separarParesImpares listaNumeros = [listaPares listaNumeros [], listaImpares listaNumeros []]
