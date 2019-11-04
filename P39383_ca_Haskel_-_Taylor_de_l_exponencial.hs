exps :: Float -> [Float]
exps x = map terme [0..]
    where
        fact :: Int -> Int
        fact n = product [1..n]

        terme :: Int -> Float
        terme 0 = 1
        terme i = terme (i-1)*x/fromIntegral i

exponencial :: Float -> Float -> Float
--exponencial x e = sum $ takeWhile (\n -> abs n>=e) $ exps x
exponencial x e = sum $ takeWhile ((>= e) . abs) $ exps x
