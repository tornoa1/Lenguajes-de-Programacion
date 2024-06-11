--Escriba un función que reciba como entrada una lista de números enteros y devuelva una nueva lista que contenga sólo los números positivos. Ejemplo: [1,2,3,4,5,8] => [4,16,64]

listaNumeros :: [Int] = [1,2,3,4,5,8]

filtrarNumeros :: [Int] -> [Int]
filtrarNumeros listaNumeros = map (^2) (filter even listaNumeros)
