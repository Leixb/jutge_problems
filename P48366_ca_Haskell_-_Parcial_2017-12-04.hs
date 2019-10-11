--------------------------------------------------------------------------------
-- Problema 1
--------------------------------------------------------------------------------
eval1 :: String -> Int
eval1 s = eval1' (words s) []
    where
        eval1' :: [String] -> [Int] -> Int
        eval1' [] [x] = x
        eval1' (x:xs) (a:b:q) = case x of
            "+" -> eval1' xs ((b + a):q)
            "-" -> eval1' xs ((b - a):q)
            "*" -> eval1' xs ((b * a):q)
            "/" -> eval1' xs ((b `div` a):q)
            _   -> eval1' xs ((read x::Int):a:b:q)
        eval1' (x:xs) q = eval1' xs ((read x::Int):q)

--------------------------------------------------------------------------------
-- Problema 2
--------------------------------------------------------------------------------
eval2 ::  String -> Int
eval2 s = head $ foldl eval2' [] (words s)
    where
        eval2' :: [Int] -> String -> [Int]
        eval2' (a:b:q) s = case s of
            "+" -> (b + a):q
            "-" -> (b - a):q
            "*" -> (b * a):q
            "/" -> (b `div` a):q
            _ -> (read s::Int):a:b:q
        eval2' q s = (read s::Int):q

--------------------------------------------------------------------------------
-- Problema 3
--------------------------------------------------------------------------------
fsmap :: a -> [a -> a] -> a
fsmap = foldl (flip ($))

--------------------------------------------------------------------------------
-- Problema 4
--------------------------------------------------------------------------------

divideNconquer :: (a -> Maybe b) -> (a -> (a, a)) -> (a -> (a, a) -> (b, b) -> b) -> a -> b
divideNconquer base divide conquer x  =
    case base x of
      Just y -> y
      Nothing -> conquer x (x1, x2) (y1, y2)
        where
            (x1, x2) = divide x
            y1 = divideNconquer base divide conquer x1
            y2 = divideNconquer base divide conquer x2


quickSort :: [Int] -> [Int]
quickSort = divideNconquer qsBase qsDivide qsConquer
    where
        qsBase :: [Int] -> Maybe [Int]
        qsBase []   = Just []
        qsBase [x]  = Just [x]
        qsBase _    = Nothing

        qsDivide :: [Int] -> ([Int], [Int])
        qsDivide (x:xs) = (lts, gts)
            where
                lts = filter (<=x) xs
                gts = filter (> x) xs

        qsConquer :: [Int] -> ([Int], [Int]) -> ([Int], [Int]) -> [Int]
        qsConquer (x:_) _ (ys1, ys2) = ys1 ++ x : ys2

--------------------------------------------------------------------------------
-- Problema 5
--------------------------------------------------------------------------------

data Racional = Integer :-: Integer deriving (Eq)

racional :: Integer -> Integer -> Racional
racional a b = (a `div` divisor) :-: (b `div` divisor)
    where divisor = gcd a b

numerador :: Racional -> Integer
numerador (a:-:_) = a

denominador :: Racional -> Integer
denominador (_:-:b) = b

instance Show Racional where
    show (a:-:b) = show a ++ ('/':show b)

--------------------------------------------------------------------------------
-- Problema 6
--------------------------------------------------------------------------------

data Tree a = Node a (Tree a) (Tree a)

recXnivells :: Tree a -> [a]
recXnivells t = recXnivells' [t]
    where recXnivells' (Node x fe fd:ts) = x:recXnivells' (ts ++ [fe, fd])

racionals :: [Racional]
racionals = recXnivells $ t (racional 1 1)
    where
        t :: Racional -> Tree Racional
        t r@(a:-:b) = Node r (t (racional a (a+b))) (t (racional (a+b) b))
