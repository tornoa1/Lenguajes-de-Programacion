listaNumeros :: [Int] = [3, 12, 8, 9, 10, 15]

esPar :: Int -> Bool
esPar n = if even n
    then True
    else False

sumaParesLC :: [Int] -> Int
sumaParesLC listaNumeros = sum [ num | num <- listaNumeros, esPar num]