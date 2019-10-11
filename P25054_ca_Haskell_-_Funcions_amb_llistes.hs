myLength :: [Int] -> Int
myLength [] = 0
myLength [x] = 1
myLength (x : xs) = 1 + myLength xs

myMaximum :: [Int] -> Int
myMaximum [x] = x
myMaximum (x : xs)
    | x > maxXs = x
    | otherwise = maxXs
    where maxXs = myMaximum xs

average :: [Int] -> Float
average x = (fromIntegral (sum x))/(fromIntegral (myLength x))

buildPalindrome :: [Int] -> [Int]
buildPalindrome x = (reverse x) ++ x

remove :: [Int] -> [Int] -> [Int]
remove x y = [a | a <- x, not (elem a y) ]

flatten :: [[Int]] -> [Int]
flatten x = [a | b <- x, a <- b]

oddsNevens :: [Int] -> ([Int], [Int])
oddsNevens x = (
        [a | a <- x, mod a 2 == 1],
        [a | a <- x, mod a 2 == 0]
        )

isPrime :: Int -> Bool
isPrime n = [ x | x <- [2..(n-1)], mod n x == 0 ] == [] && n > 1

primeDivisors :: Int -> [Int]
primeDivisors n = [ x | x <- [2..n], mod n x == 0, isPrime x]
