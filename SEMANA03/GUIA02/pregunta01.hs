crearListaP' :: Int -> [Int] 
crearListaP' n = crearListaP1 n [] []

crearListaP1 :: Int -> [Int] -> [Int] -> [Int]
crearListaP1 n listaNegativos listaPositivos =
    if n == 0
        then
            (listaNegativos ++ [0]) ++ listaPositivos
        else
            crearListaP1
                (n - 1)
                (listaNegativos ++ [-n])
                ([n] ++ listaPositivos)
