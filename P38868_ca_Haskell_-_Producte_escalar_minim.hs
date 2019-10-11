import Data.List

minProd :: [Int] -> [Int] -> Int
minProd a b = prod a' b'
    where
        a' = sort a
        b' = reverse $ sort b
        prod a b = sum $ zipWith (*) a b
