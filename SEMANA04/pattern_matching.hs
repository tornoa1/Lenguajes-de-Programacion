obtenerEC :: Int -> String
obtenerEC codigo =
    if codigo == 1
        then "Soltero"
        else (if codigo == 2
            then "Casado"
            else (if codigo == 3
                then "Divorciado"
                else (if codigo == 4
                    then "Viudo"
                    else (if codigo == 5
                        then "Muerto"
                        else "Codigo incorrecto"))))

obtenerECPM :: Int -> String
obtenerECPM 1 = "Soltero"
obtenerECPM 2 = "Casado"
obtenerECPM 3 = "Divorciado"
obtenerECPM 4 = "Viudo"
obtenerECPM 5 = "Muerto"
obtenerECPM x = "Codigo incorrecto"


categorizarEdad :: Int -> String
categorizarEdad edad
    | edad < 18 = "Menor edad"
    | edad < 70 = "Adulto"
    | otherwise = "Mayor edad"