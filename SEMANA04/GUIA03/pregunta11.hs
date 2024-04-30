type VectorPosiciones = (Float, Float, Float, Bool)

listaVectores :: [VectorPosiciones] = [
    (1.2, 3.3, 5.2, True),
    (2.2, 4.1, 5.2, False),
    (2.2, 5.0, 5.2, True),
    (2.2, 1.3, 5.2, False)]

norma :: VectorPosiciones -> Float
norma (x, y, z, _) =
    sqrt ((x ^ 2) + (y ^ 2) + (z ^ 2))

normalizar :: VectorPosiciones -> (Float, Float, Float)
normalizar (x, y, z, a) = 
    (x / norma (x,y,z,a), y / norma (x,y,z,a), z / norma (x,y,z,a)) 

listaTuplas :: [VectorPosiciones] -> [(Float, Float, Float)]
listaTuplas listaVectores = [ normalizar (x, y, z, a) | (x, y, z, a) <- listaVectores, a == True]