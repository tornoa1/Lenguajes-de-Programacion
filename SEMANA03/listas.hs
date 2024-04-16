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

contar' :: [Int] -> Int
contar' listaNum = contarTail listaNum 0

contarTail :: [Int] -> Int -> Int
contarTail listaNum conteoParcial =
    if null listaNum
        then
            conteoParcial
        else
            contarTail (tail listaNum)
                (1 + conteoParcial)


sumarLista :: [Int] -> Int
sumarLista listaNum = 
    if null listaNum
        then
            -- Caso base
            0
        else
            -- Caso recursivo
            (head listaNum) + (sumarLista (tail listaNum))


sumarLista' :: [Int] -> Int
sumarLista' listaNum = sumarListaTail listaNum 0

sumarListaTail :: [Int] -> Int -> Int
sumarListaTail listaNum acc= 
    if null listaNum
        then
            -- Caso base
            acc
        else
            -- Caso recursivo
            sumarListaTail (tail listaNum)
            ((head listaNum) + acc)


-- promedioLista :: [Float] -> Float -> Float -> Float
-- promedioLista listaNum sumaParcial conteo=
--     if null listaNum
--         then
--             sumaParcial / conteo
--         else
--             promedioLista (tail listaNum)
--             (head listaNum) + sumaParcial
--             (1 + conteo)


crearListaNumeros' :: Int -> [Int] 
crearListaNumeros' n = crearListaNumerosTail n [] 0

crearListaNumerosTail :: Int -> [Int] -> Int -> [Int]
crearListaNumerosTail n listaParcial cont =
    if cont == n
        then
            -- Caso base
            listaParcial
        else
            -- Caso recursivo
            crearListaNumerosTail
                n
                (listaParcial ++ [cont])
                (cont + 1)
