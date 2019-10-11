flatten :: [[Int]] -> [Int]
flatten = foldr (++) []

myLength :: String -> Int
myLength = foldr (\_ b -> b+1) 0

myReverse :: [Int] -> [Int]
myReverse = foldl (flip (:)) []

myReverseR :: [Int] -> [Int]
myReverseR = foldr (\a b-> b++[a]) [] 

countIn :: [[Int]] -> Int -> [Int]
countIn l x = map (length . (filter (==x))) l

firstWord :: String -> String
firstWord = takeWhile (/= ' ') . dropWhile (==' ')
