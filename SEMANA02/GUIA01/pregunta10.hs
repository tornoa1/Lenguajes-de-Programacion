imc :: Float -> Float -> Float
imc peso altura =
    peso / (altura^2)

clasificar_imc :: Float -> Float -> String
clasificar_imc peso altura =
    if imc peso altura < 18.5
        then "bajo"
        else if imc peso altura >= 18.5 && imc peso altura < 25
            then "normal"
            else if imc peso altura >= 25 && imc peso altura < 30
                then "sobrepeso"
                else "obesidad"