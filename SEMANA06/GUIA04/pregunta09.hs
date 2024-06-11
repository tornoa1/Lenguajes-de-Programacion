--Elabore una función que reciba una lista de tuplas de 2 valores, donde el primer valor sea un numero y una potencia, y devuelva una nueva lista con los números elevados a la potencia correspondiente.
--Ejemplo: [(2,2),(3,5),(4,2),(2,6)] => [4,243,16,64]

tuplasValores :: [(Int, Int)] = [(2,2),(3,5),(4,2),(2,6)]

elevarPotencia :: [(Int, Int)] -> [Int]
elevarPotencia tuplasValores = 
    map (\(base, exponente) -> base ^ exponente) tuplasValores