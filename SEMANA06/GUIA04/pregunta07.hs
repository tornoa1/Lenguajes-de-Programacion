--Contador de vocales: Escribe una función que reciba una cadena de texto y devuelva la cantidad de vocales que contiene.

esVocal :: Char -> Bool
esVocal c =
    if or [c == 'a', c == 'e', c == 'i', c == 'o', c == 'u']
        then
            True
        else
            False

contarVocales :: String -> Int
contarVocales cadena = length (filter esVocal cadena)
