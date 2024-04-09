--Función que multiplique por 2 si num es mayor que 100
-- y divida entre 3 en otros casos

multiplicarDividir :: Float -> Float 
multiplicarDividir num =
    if num > 100
        then num * 2
        else num / 2

devolverDigito :: Int -> Int -> Int
devolverDigito num pos =
    if pos == 0
        then mod num 10
        else div num 10

devolver3Digito num pos =
    if pos == 0
        then mod num 10
        else if pos == 1
            then mod (div num 10) 10
            else mod (div (div num 10) 10) 10

mayorEdad :: String -> Int -> Bool
mayorEdad nombre edad =
    if edad >= 18
        then True
        else False

numero :: Int = 10
numeroNegativo :: Int = (-10)

estatura :: Float = 23.3

esAdulto :: Bool = True

letra :: Char = 'a'

nombre :: String = "Gabriel"