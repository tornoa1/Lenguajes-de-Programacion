absoluto :: Float -> Float
absoluto n1 =
    if n1 < 0.0
        then n1 * (-1)
        else n1

manhattan :: Float -> Float -> Float -> Float -> Float
manhattan x1 y1 x2 y2 =
    absoluto(x2 - x1) + absoluto(y2 -y1)