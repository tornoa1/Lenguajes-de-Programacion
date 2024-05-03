--Elaborar una función que reciba un número N y devuelva una lista con los N primeros números primos.

esPrimo :: Int -> Bool
esPrimo 1 = False
esPrimo 2 = True
esPrimo n 
    | (length [x | x <- [2 .. n-1], mod n x == 0]) > 0 = False
    | otherwise = True

listaPrimos :: Int -> [Int]
listaPrimos n = [x | x <- [2..n], esPrimo x]