mayor :: Int -> Int -> Int -> Int
mayor n1 n2 n3 =
    if n1 >= n2 && n1 >= n3
        then n1
        else if n2 >= n3
            then n2
            else n3