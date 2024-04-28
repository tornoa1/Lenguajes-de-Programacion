--Escriba una función que reciba como parametro una cadena, extraiga las palabras y coloque cada una en una lista.

extraerLetras :: String -> [Char] -> [Char]
extraerLetras cadena listaChar = 
    if null cadena
        then
            listaChar
        else
            extraerLetras (tail cadena) (listaChar ++ [head cadena])
            