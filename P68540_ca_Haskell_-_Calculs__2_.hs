diffSqrs :: Integer -> Integer
diffSqrs n = sum [1..n] ^2 - sum (map (^2) [1..n])

pythagoreanTriplets :: Int -> [(Int, Int, Int)]
pythagoreanTriplets n = [(a, b, n-a-b) | a <- [1..n], b <- [a..n], 2*b+a < n, a^2 + b^2 == (n-a-b)^2]

sumDigits :: Integer -> Integer
--sumDigits n = snd (until (\(a, b) -> a == 0) (\(a, b) -> (a `div` 10, a `mod` 10 + b)) (n, 0))
sumDigits n = snd (until ((0 ==) . fst) (\(a, b) -> (a `div` 10, a `mod` 10 + b)) (n, 0))

digitalRoot :: Integer -> Integer
digitalRoot = until (<10) sumDigits

tartaglia :: [[Integer]]
tartaglia = iterate (\l -> zipWith (+) (0:l) (l++[0])) [1]
