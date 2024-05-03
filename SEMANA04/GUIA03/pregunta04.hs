-- Elaborar una función que calcule la suma de los elemento pares de una lista. 
-- Utilice tail recursion y guards. Puede utilizar list comprehension.

listaNumeros :: [Int] = [11, 19, 06, 17, 14, 20, 18]

-- sumaPares' :: [Int] -> Int
-- sumaPares' listaNumeros = sumaPares listaNumeros 0

sumaPares' :: [Int] -> Int
sumaPares' listaNumeros = sum [x | x <- listaNumeros, even x]

sumaPares :: [Int] -> Int -> Int
sumaPares listaNumeros sum
    | null listaNumeros = sum
    | even (head listaNumeros) = sumaPares (tail listaNumeros) ((head listaNumeros) + sum)
    | otherwise = sumaPares (tail listaNumeros) sum