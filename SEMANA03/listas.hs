listaNumeros :: [Int] = [1, 2, 3, 4, 5]
listaNombres :: [String] = ["Pepe", "Rocio", "Carlos"]


contar :: [Int] -> Int
contar listaNum = 
    if null listaNum
        then
            -- Caso base
            0
        else
            -- Caso recursivo
            contar (tail listaNum) + 1


sumarLista :: [Int] -> Int
sumarLista listaNum = 
    if null listaNum
        then
            -- Caso base
            0
        else
            -- Caso recursivo
            (head listaNum) + (sumarLista (tail listaNum))
            

promedioLista :: [Float] -> Float -> Float -> Float
promedioLista listaNum sumaParcial conteo=
    if null listaNum
        then
            sumaParcial / conteo
        else
            (promedioLista (tail listaNum)
                (head listaNum) + sumaParcial
                1 + conteo)
