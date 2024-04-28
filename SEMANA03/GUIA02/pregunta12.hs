-- Escribir una función que reciba una lista de Strings y un String, 
-- y devuelva True si la lista contiene el String o False si no lo contiene.

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