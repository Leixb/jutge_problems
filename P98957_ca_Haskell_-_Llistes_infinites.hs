ones :: [Integer]
ones = 1:ones

nats :: [Integer]
nats = iterate (+1) 0

ints :: [Integer]
ints = iterate aux 0
    where
        aux n
          | n <= 0    = -n+1
          | otherwise = -n

triangulars :: [Integer]
triangulars = [ n*(n+1) `div` 2 | n <- nats ]

factorials :: [Integer]
factorials = scanl (*) 1 (iterate (+1) 1)

fibs :: [Integer]
fibs = 0 : 1 : zipWith (+) fibs (tail fibs)

primes :: [Integer]
primes = primes' (drop 2 nats)
    where
        primes' :: [Integer] -> [Integer] -- Eratostenes sieve
        --primes' (x:xs) = x: primes' (filter (\a -> a `mod` x /= 0) xs)
        primes' (x:xs) = x: primes' (filter ((/= 0) . flip mod x) xs)

hammings :: [Integer]
hammings = 1 : merge ham2 (merge ham3 ham5)
    where
        ham2 = map (*2) hammings
        ham3 = map (*3) hammings
        ham5 = map (*5) hammings

        merge :: [Integer] -> [Integer] -> [Integer]
        merge xxs@(x:xs) yys@(y:ys)
            | x < y     = x: merge xs yys
            | x > y     = y: merge xxs ys
            | otherwise = x: merge xs ys

lookNsay :: [Integer]
lookNsay = iterate say 1
    where
        say :: Integer -> Integer
        say n = mergedigits (say' (digits n))

        say' :: [Integer] -> [Integer]
        say' [] = []
        say' xl@(x:_) =
            let (a, b) = span (==x) xl in
                toInteger (length a) : x : say' b

        digits :: Integer -> [Integer]
        digits 0 = []
        digits x = digits (x `div` 10) ++ [x `mod` 10]

        mergedigits :: [Integer] -> Integer
        --mergedigits =  foldl (\a b-> a*10+b) 0
        mergedigits =  foldl ((+) . (*10)) 0

tartaglia :: [[Integer]]
tartaglia = iterate (\l -> zipWith (+) (0:l) (l++[0])) [1]
