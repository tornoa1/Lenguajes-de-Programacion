--Elabore una función que reciba dos listas de enteros (de igual tamaño) y una función que reciba 2 enteros y devuelva un nuevo entero, y las combine en una sola lista bajo la función ingresada.
-- [1,2,3] [2,3,4] (\a b-> a + b) = [3,5,7]

listaUno:: [Int] = [1, 2, 3]
listaDos :: [Int] = [2, 3, 4]

crearListaCombinada :: [Int] -> [Int] -> (Int -> Int -> Int) -> [Int]
crearListaCombinada listaUno listaDos f = 
    map (\i -> f (listaUno !! i) (listaDos !! i)) [0..(length listaUno - 1)]


    