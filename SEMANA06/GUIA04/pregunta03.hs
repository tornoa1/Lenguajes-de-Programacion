--Escriba una funcion llamada 'transformarEnterosACuadrados' que reciba como entrada una lista de enteros y devuelva una nueva lista con los numeros enteros elevados al cuadrado. Ejemplo: [1,2,3] => [1,4,9]

listaNumeros :: [Int] = [1, 3, 5, 7, 9]

transformarEnterosACuadrados :: [Int] -> [Int]
transformarEnterosACuadrados listaNumeros = map (^2) listaNumeros