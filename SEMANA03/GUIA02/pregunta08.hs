-- Escriba una función que reciba como entrada una lista de años y devuelva una nueva lista con aquellos que son bisiestos. 
-- Tomar en cuenta que un año bisiesto es un año que puede ser divisible entre 4 (sin residuo) 
-- excepto cada año que es divisible entre 100 (sin residuo), 
-- a no ser que el año sea divisible entre 400 (sin residuo).

listaAnos :: [Int] = [2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008]

anoBisiesto :: [Int] -> [Int] -> [Int]
anoBisiesto listaAnos nuevaLista =
    if null listaAnos
        then
            nuevaLista
        else
            anoBisiesto 
                (tail listaAnos)
                (if (mod (head listaAnos) 4) == 0 && (mod (head listaAnos) 100) /= 0 || (mod (head listaAnos) 400) == 0
                    then
                        nuevaLista ++ [head listaAnos]
                    else
                        nuevaLista ++ [])
