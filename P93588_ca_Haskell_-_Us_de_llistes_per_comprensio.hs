myMap :: (a -> b) -> [a] -> [b]
myMap f l = [ f x | x <- l ]

myFilter :: (a -> Bool) -> [a] -> [a]
myFilter f l = [ x | x <- l, f x ]

myZipWith :: (a -> b -> c) -> [a] -> [b] -> [c]
myZipWith f a b = [ f x y | (x, y) <- zip a b ]

thingify :: [Int] -> [Int] -> [(Int, Int)]
thingify a b = [ (x, y) | x <- a, y <- b, x `mod` y == 0 ]

factors :: Int -> [Int]
factors n = [ x | x <- [1..n], n `mod` x == 0]
