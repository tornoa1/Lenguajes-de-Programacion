--Elaborar una función que reciba un número N y devuelva la suma de los N primeros números de la sucesión fibonacci.

fibonacci :: Int -> Int
fibonacci n
    | n < 2 = n
    | n == 2 = n
    | otherwise = fibonacci (n-1) + fibonacci (n-2)