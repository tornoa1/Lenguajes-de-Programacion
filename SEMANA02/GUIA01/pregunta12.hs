s :: Float -> Float -> Float -> Float
s a b c =
    (a + b + c) / 2

area :: Float -> Float -> Float -> Float
area a b c =
    sqrt((s a b c) *
    ((s a b c) - a) *
    ((s a b c) - b) *
    ((s a b c) - c)
    )