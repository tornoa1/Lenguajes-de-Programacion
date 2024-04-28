-- Escribir una función que reciba una lista de Strings y un String. 
-- Si la lista no contiene el String ingresado, devolver una nueva lista que agregue el String ingresado a la lista inicial. 
-- Si la lista lo contiene, devolver la lista inicial.

listaStrings :: [String] = ["ana", "Pedro", "futbol", "arbol", "universidad", "Sofia"]

validarExistencia :: [String] -> String -> Bool
validarExistencia listaStrings s =
    if null listaStrings
        then
            False
        else
            if s == (head listaStrings)
                then
                    True
                else
                    validarExistencia (tail listaStrings) s

pregunta13 :: [String] -> String -> [String]
pregunta13 listaStrings s =
    if validarExistencia listaStrings s == True
        then
            listaStrings
        else
            pregunta13 (listaStrings ++ [s]) s