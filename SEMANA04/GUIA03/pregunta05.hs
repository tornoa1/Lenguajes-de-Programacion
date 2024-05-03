-- Elaborar una función que permita calcular el factorial de un número. 
-- Este número debe de ingresarse como argumento de entrada

factorial :: Int -> Int
factorial n
    | n == 0 = 1
    | otherwise = n * factorial (n - 1)
