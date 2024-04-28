estaLetraEnString :: Char -> [Char] -> Bool
estaLetraEnString  num lista =
    if null lista
        then
            False
        else
            if num == (head lista)
                then True
                else
                    estaLetraEnString num (tail lista)

esVocal :: Char -> Bool
esVocal c =
    if or [c == 'a', c == 'e', c == 'i', c == 'o', c == 'u']
        then
            True
        else
            False

listaVocales' :: String -> [Char]
listaVocales' cadena = listaVocales cadena []

listaVocales :: String -> [Char] -> [Char]
listaVocales cadena listaRes =
    if null cadena
        then
            listaRes
        else
            listaVocales
                (tail cadena)
                (if (esVocal (head cadena))
                    then
                        (if estaLetraEnString (head cadena) listaRes
                            then
                                listaRes
                            else
                                (head cadena) : listaRes)
                    else
                        listaRes)