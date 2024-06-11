--Elabore una función que reciba una lista de nombres, y devuelva una nueva lista agregando un saludo al principo de cada nombre.

listaNombres :: [String] = ["Leo","Hernan","Pepe"]

crearSaludo :: String -> String
crearSaludo nombre = "Buenas tardes, " ++ nombre

agregarSaludo :: [String] -> [String]
agregarSaludo listaNombres = map crearSaludo listaNombres