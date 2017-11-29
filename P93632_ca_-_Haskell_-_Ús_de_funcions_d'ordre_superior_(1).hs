eql :: [Int] -> [Int] -> Bool
eql = (==)

prod :: [Int] -> Int
prod = foldl (*) 1

prodOfEvens :: [Int] -> Int
prodOfEvens l = prod [ x | x <- l, x `mod` 2 == 0 ]

powersOf2 :: [Int]
powersOf2 = [ 2^n | n <- [0..] ]

scalarProduct :: [Float] -> [Float] -> Float
scalarProduct a b = foldr (+) 0 $ zipWith (*) a b
