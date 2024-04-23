type Persona = (String, Int, Float)

listaEnteros :: [Int] = [1, 4, 6]
tuplaPersona :: Persona = ("Pepe", 34, 1.7)
listaPersonas :: [Persona] = [("Pepe", 34, 1.7), ("Gabriel", 23, 1.73), ("Sofia", 24, 1.71), ("Rodrigo", 29, 1.78)]


getNombre :: Persona -> String
getNombre (x, _, _) = x

getEdad :: Persona -> Int
getEdad (_, x, _) = x

getEstatura :: Persona -> Float
getEstatura (_, _, x) = x
