-- Se ha recibido diversos registros de la temperatura (en °C) en las ciudades de Lima y Callao durante el día. Se le solicita crear una función que calcule la temperatura promedio en la ciudad de Lima. Los datos se encuentran en la siguiente lista:

listaCiudades :: [(Int, String, String, Float)] = [(1, "Lima", "10/05/2023", 28.5),(2, "Lima", "10/05/2023", 27.8),(3, "Callao", "10/05/2023", 30.5),(4, "Lima", "10/05/2023", 27.0),(5, "Lima", "10/05/2023", 29.5),(6, "Callao", "10/05/2023", 28.5),(7, "Callao", "10/05/2023", 27.1),(8, "Callao", "10/05/2023", 26.5),(9, "Lima", "10/05/2023", 30.5),(10, "Lima", "10/05/2023", 31.3),(11, "Lima", "10/05/2023", 26.0),(12, "Callao", "10/05/2023", 27.9),(13, "Callao", "10/05/2023", 25.7),(14, "Lima", "10/05/2023", 24.8)]

temperaturaCiudad :: [(Int, String, String, Float)] -> String -> [Float]
temperaturaCiudad listaCiudades nombreCiudad =
    map (\(_, _, _, temp) -> temp) (filter (\(_, ciudad, _, _) -> ciudad == nombreCiudad) listaCiudades)

promedioTempCiudad :: [(Int, String, String, Float)] -> String -> Float
promedioTempCiudad listaCiudades nombreCiudad =
    sum(map (\(_, _, _, temp) -> temp) (filter (\(_, ciudad, _, _) -> ciudad == nombreCiudad) listaCiudades)) / 
    fromIntegral (length (map (\(_, _, _, temp) -> temp) (filter (\(_, ciudad, _, _) -> ciudad == nombreCiudad) listaCiudades)))