-- Elabore una función que reciba como entrada una lista de tuplas con 3 valores: nombre de producto (String), precio (Float), stock (Int). Se quiere obtener una lista de con los nombres de aquellos productos que su precio sea mayor a 10.0 y tengan stock (stock mayor a cero).
-- Ejemplo: [("Polo", 30.0, 5), ("Camisa", 50.0, 0), ("Collar", 5.0, 2), ("Casaca", 30.50, 3)] => ["Polo","Casaca"]

listaProductos :: [(String, Float, Int)] = [("Polo", 30.0, 5), ("Camisa", 50.0, 0), ("Collar", 5.0, 2), ("Casaca", 30.50, 3)]

devolverProductos :: [(String, Float, Int)] -> [String]
devolverProductos listaProductos = 
    map (\(producto, _, _) -> producto) (filter (\(_, precio, stock) -> precio > 10 && stock > 0) listaProductos)