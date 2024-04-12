cambiar_moneda :: Float -> String -> Float
cambiar_moneda soles nombre =
    if nombre == "Dolar"
        then soles * 0.27
        else if nombre == "Euro"
            then soles * 0.24
            else if nombre == "Peso chileno"
                then soles * 212.57
                else if nombre == "Peso argentino"
                    then soles * 56.79
                    else if nombre == "Peso argentino"
                        then soles * 0.36
                        else 0.0