import Data.List

degree :: Eq a => [(a, a)] ->  a -> Int
degree [] _ = 0
degree ((a, b):xs) x 
    | elem x [a, b]     = 1 + degree xs x
    | otherwise         = degree xs x

degree' :: Eq a => [(a, a)] -> a -> Int
degree' l x = foldl (incIfElem x) 0 l
    where
        incIfElem x n (a, b) 
            | elem x [a, b]     = 1+n
            | otherwise         = n

neighbors :: Ord a => [(a, a)] -> a -> [a]
neighbors l x = sort $ neighbors' l x
    where 
        neighbors' [] _ = []
        neighbors' ((a,b):xs) x
             | x == a    = b:neighbors' xs x
             | x == b    = a:neighbors' xs x
             | otherwise = neighbors' xs x
