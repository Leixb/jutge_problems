eql :: [Int] -> [Int] -> Bool
eql a b
    | length a /= length b = False
    | otherwise = and $ zipWith (==) a b

prod :: [Int] -> Int
prod = foldl (*) 1

prodOfEvens :: [Int] -> Int
--prodOfEvens l = prod $ filter (\x -> x `mod` 2 == 0) l
prodOfEvens l = prod $ filter ((0==) . (`mod` 2)) l

powersOf2 :: [Int]
powersOf2 = iterate (*2) 1

scalarProduct :: [Float] -> [Float] -> Float
--scalarProduct a b = foldr (+) 0 $ zipWith (*) a b
scalarProduct a b = sum $ zipWith (*) a b
