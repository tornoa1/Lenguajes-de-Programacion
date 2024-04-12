validador2 :: Int -> String
validador2 n1 =
    if n1 `mod` 2 == 0
        then "PAR"
        else "IMPAR"