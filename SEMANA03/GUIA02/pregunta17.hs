-- Escriba una función que calcule y añada a la lista los proximos 
-- 3 números siguiendo la sucesión de Fibonacci. Trabajar con la siguiente lista [0, 1, 1, 2, 3, 5, 8]

listaNumeros :: [Int] = [0, 1, 1, 2, 3, 5, 8]

ultimosDos :: [Int] -> Int -> [Int] -> [Int]
ultimosDos listaNumeros acc ultimoPar =
    if acc > 1
        then 
            ultimoPar
        else
            ultimosDos (init listaNumeros) (acc + 1) ([last listaNumeros] ++ ultimoPar)

sumarLista :: [Int] -> Int
sumarLista ultimosDos = 
    if null ultimosDos
        then
            0
        else
            (head ultimosDos) + (sumarLista (tail ultimosDos))

proximosTresFibonacci :: [Int] -> Int -> [Int]
proximosTresFibonacci listaNumeros acc =
    if acc > 2
        then
            listaNumeros
        else
            proximosTresFibonacci (listaNumeros ++ [sumarLista (ultimosDos listaNumeros 0 [])]) (acc + 1)
