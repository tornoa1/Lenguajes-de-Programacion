-- Se tiene una lista que contiene mediciones del peso de una persona (2 mediciones) además del nombre de la persona. Un ejemplo sería como el siguiente: [("Pedro", 78.7, 80.4), ("Luis", 79.0, 80.7), ...]

type Medicion = (String, Float, Float)

tuplaMedicion :: [Medicion] = [("Pedro", 78.7, 80.4), ("Luis", 79.0, 80.7)]

errorElevado :: Medicion -> Float
errorElevado (_, x1, x2) =
    (x1 - x2) ^ 2

pregunta10 :: [Medicion] -> Float
pregunta10 listaMediciones = 
    sqrt ((sum [ errorElevado med | med <- listaMediciones ]) / (sum [1| _ <- listaMediciones]))