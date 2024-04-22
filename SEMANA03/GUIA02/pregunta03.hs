listaNumeros :: [Int] = [1, 2, 3, 4]

productoPares' :: [Int] -> Int
productoPares' listaNumeros = productoPares listaNumeros 1

productoPares :: [Int] -> Int -> Int
productoPares listaNumeros acc =
    if null listaNumeros
        then
            acc
        else
            productoPares 
                (tail listaNumeros)
                (if (mod (head listaNumeros) 2) == 0
                    then
                        (acc * (head listaNumeros))
                    else
                        acc)