--Escriba un función que reciba como entrada una lista de números enteros y devuelva una nueva lista que solamente contenga los cuadrados de cada número par de la lista de entrada. Ejemplo: [1,2,3,4,5,8] => [4,16,64]

listaNumeros :: [Int] = [1,2,3,4,5,8]

devolverParesCuadrados :: [Int] -> [Int]
devolverParesCuadrados listaNumeros = map (^2) (filter even listaNumeros)