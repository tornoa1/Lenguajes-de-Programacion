-- Elabora una función que reciba una lista de tuplas de 3 valores: nombre del anime (String), rating (Float) y género (String). El programa debera, además recibir como entrada un rating y un genero, y debera devolver una lista con aquellos animes con un rating mayor o igual al ingresado y pertenecientes al género ingresado.

-- [("Noragami",7.9,"Action"),("Neon Genesis Evangelion",8.5,"Sci-Fi"),("Jujutsu Kaisen",8.5,"Action"),("Sword Art Online",7.5,"Adventure"),("Tokyo Ghoul",7.7,"Fantasy"),("Fullmetal Alchemist: Brotherhood",9.1,"Action")] 

-- rating: 8.3 género: "Action" El resultado deberia ser: [("Jujutsu Kaisen",8.5,"Action"),("Fullmetal Alchemist: Brotherhood",9.1,"Action")]

listaAnimes :: [(String, Float, String)] = [("Noragami",7.9,"Action"),("Neon Genesis Evangelion",8.5,"Sci-Fi"),("Jujutsu Kaisen",8.5,"Action"),("Sword Art Online",7.5,"Adventure"),("Tokyo Ghoul",7.7,"Fantasy"),("Fullmetal Alchemist: Brotherhood",9.1,"Action")]

devolverAnime :: [(String, Float, String)] -> Float -> String -> [(String, Float, String)]
devolverAnime listaAnimes ratingB generoB =
    filter (\(_, rating, genero) -> rating >= ratingB && genero == generoB) listaAnimes
    