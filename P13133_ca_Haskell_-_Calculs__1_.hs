sumMultiples35 :: Integer -> Integer
sumMultiples35 n =
    let min3 = (n-1) `div` 3
        min5 = (n-1) `div` 5
        min15 = (n-1) `div` 15
        sum3 = 3 * (sumtill min3)
        sum5 = 5 * (sumtill min5)
        sum15 = 15 * (sumtill min15)
    in sum3 + sum5 - sum15
        where sumtill n = n*(n+1) `div` 2

fibonacci :: Int -> Integer
fibonacci n = fibs!!n

fibs :: [Integer]
fibs = map fst $ iterate (\(a, b) -> (b, a+b)) (0, 1)

sumEvenFibonaccis :: Integer -> Integer
sumEvenFibonaccis n = sum $ filter even $ takeWhile (<n) fibs

largestPrimeFactor :: Int -> Int
largestPrimeFactor 1 = 1
largestPrimeFactor n =
    let m = head $ filter (\x -> n `mod` x == 0) [2..n]
        q = n `div` m
    in if q == 1
        then m
        else largestPrimeFactor q


isPalindromic :: Integer -> Bool
isPalindromic n =
    show n == reverse (show n)
