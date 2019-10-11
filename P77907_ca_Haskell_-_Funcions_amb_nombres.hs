absValue :: Int -> Int
absValue a = if a > 0 then a else -a

power :: Int -> Int -> Int
power x p = if p == 0 then 1 else x * (power x (p-1))

slowFib :: Int -> Int
slowFib 0 = 0
slowFib 1 = 1
slowFib a = slowFib(a-1) + slowFib(a-2)

quickFib :: Int -> Int
quickFib n = round $ phi ** fromIntegral n / sq5
  where
    sq5 = sqrt 5 :: Double
    phi = (1 + sq5) / 2 

isPrime :: Int -> Bool
isPrime n = [ x | x <- [2..(n-1)], mod n x == 0 ] == [] && n > 1

