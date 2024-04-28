-- Escribir una función para calcular la pendiente de una recta, la función debe recibir dos parametros, 
-- cada uno es una lista de dos elementos (números enteros) que representan el punto A y punto B de la recta.

listaA :: [Int] = [7, 2]
  :: [Int] = [8, 6]

calcularPendiente' :: [Int] -> [Int] -> Float
calcularPendiente' listaA listaB = calcularPendiente listaA listaB

calcularPendiente :: [Int] -> [Int] -> Float
calcularPendiente listaA listaB =
    fromIntegral ((listaB!!1) - (listaA!!1)) / fromIntegral ((head listaB) - (head listaA))