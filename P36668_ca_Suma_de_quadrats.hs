main = do
    num <- getLine
    let n = read num :: Int
    print $ sum [ x^2 | x <- [1..n] ]
