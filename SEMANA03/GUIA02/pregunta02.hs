listaNumeros :: [Int] = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

sumaImpares' :: [Int] -> Int
sumaImpares' listaNumeros = sumaImpares listaNumeros 0

sumaImpares :: [Int] -> Int -> Int
sumaImpares listaNumeros acc =
    if null listaNumeros
        then
            acc
        else
            sumaImpares 
                (tail listaNumeros)
                (if (mod (head listaNumeros) 2) /= 0
                    then
                        (acc + (head listaNumeros))
                    else
                        acc)
