countIf :: (Int -> Bool) -> [Int] -> Int
countIf f l = length [x | x <- l, f x]

pam :: [Int] -> [Int -> Int] -> [[Int]]
pam l lf = [ [f x | x <- l] | f <- lf ]

pam2 :: [Int] -> [Int -> Int] -> [[Int]]
pam2 l lf = [ [f x | f <- lf] | x <- l ]

filterFoldl :: (Int -> Bool) -> (Int -> Int -> Int) -> Int -> [Int] -> Int
filterFoldl sieve f z l = foldl f z [ x | x <- l, sieve x ]

insert :: (Int -> Int -> Bool) -> [Int] -> Int -> [Int]
insert relacio l element = let (a, b) = span ((flip relacio) element) l
    in a ++ element:b

insertionSort :: (Int -> Int -> Bool) -> [Int] -> [Int]
insertionSort relacio l = foldl (insert relacio) [] l
