flatten :: [[Int]] -> [Int]
flatten = foldr (++) []

myLength :: String -> Int
myLength = foldr (\_ b -> b+1) 0

myReverse :: [Int] -> [Int]
myReverse = foldl (flip (:)) []

countIn :: [[Int]] -> Int -> [Int]
countIn ll x = map (count x) ll
    where
        count x ll = length [ y | y <- ll, y == x ]

firstWord :: String -> String
firstWord s = takeWhile (/= ' ') $ dropWhile (==' ') s
