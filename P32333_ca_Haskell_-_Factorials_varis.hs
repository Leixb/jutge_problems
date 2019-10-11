fact1 :: Integer -> Integer
fact1 n = product [1..n]

fact2 :: Integer -> Integer
fact2 1 = 1
fact2 n = n * fact2 (n-1)

fact3 :: Integer -> Integer
fact3 n 
    | n == 1 = 1
    | otherwise = n * fact3 (n-1)

fact4 :: Integer -> Integer
fact4 n = if n == 1 then 1 else n * fact4 (n-1)

fact5 :: Integer -> Integer
fact5 n = foldl (*) 1 [1..n]

fact6 :: Integer -> Integer
fact6 n = fact6' n 1
  where
    fact6' 0 m = m
    fact6' n m = fact6' (n-1) (n*m)

fact7 :: Integer -> Integer
fact7 = fact6

fact8 :: Integer -> Integer
fact8 = fact1
