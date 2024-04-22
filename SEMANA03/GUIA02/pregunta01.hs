crearListaP' :: Int -> [Int] 
crearListaP' n = crearListaP1 n [] []

crearListaP1 :: Int -> [Int] -> [Int] -> [Int]
crearListaP1 n listaNegativos listaPositivos =
    if n == 0
        then
            (listaNegativos ++ [0]) ++ listaPositivos 
        else
            crearListaP1 (n - 1) (listaNegativos ++ [-n]) ([n] ++ listaPositivos) 
            --n = 3, crearListaP1 (2) (listaNegativos ++ -3) (3 ++ listaPositivos)
            --n = 2, crearListaP1 (1) (listaNegativos ++ -2) (2 ++ listaPositivos)
            --n = 1, crearListaP1 (0) (listaNegativos ++ -1) (1 ++ listaPositivos)
            -- n = 0 CASO BASE