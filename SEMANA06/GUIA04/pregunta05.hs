--Escriba un función que reciba como entrada una lista de strings y devuelva una nueva lista que contenga solamente aquellos strings que tengan más de 5 caracteres.

listaStrings :: [String] = ["Miguel", "Juana", "Ariana", "Gabriel", "Sofia"]

masDe5Caracteres :: [String] -> [String]
masDe5Caracteres listaStrings = filter (\x -> length x > 5) listaStrings