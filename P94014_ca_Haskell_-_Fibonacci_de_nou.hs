fib :: Int -> Integer
fib 0 = 0
fib n = fst (fib' (n-1))

fib' 0 = (1, 1)
fib' 1 = (1, 2)
fib' n
     | even n    = (a*a + b*b, c*c - a*a)
     | otherwise = (c*c - a*a, b*b + c*c)
         where
             (a,b) = fib' (n `div` 2 - 1)
             c     = a + b
