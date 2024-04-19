listaNumeros1 :: [Int] = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
listaNumeros2 :: [Int] = [6, 7, 8, 9, 10, 11, 12, 13, 14, 15]

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

pregunta09' :: [Int] ->  [Int] -> [Int]
pregunta09' listaNumeros1 listaNumeros2 = 
    pregunta09 listaNumeros1 listaNumeros2 []

--pregunta09 :: [Int] -> [Int] -> [Int]
pregunta09 listaNumeros1 listaNumeros2 listaRes =
    if null listaNumeros1
        then
            listaRes
        else
            pregunta09 
                (tail listaNumeros1)
                listaNumeros2
                (if (validarExistencia listaNumeros2 (head listaNumeros1))
                    then
                        (head listaNumeros1) : listaRes
                    else
                        listaRes)
