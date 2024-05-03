-- Elaborar una función que reciba un número N y devuelva una lista con los N primeros números de la sucesión fibonacci.

fibonacci :: Int -> [Int]
fibonacci n 
    | n < 2 = [0, 1]
    | otherwise = fibonacci (n-1) ++ [last (fibonacci (n-1)) + last (fibonacci (n-2))]
