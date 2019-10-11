--------------------------------------------------------------------------------
-- Problema 1
--------------------------------------------------------------------------------
multEq :: Int -> Int -> [Int]
--multEq a b = 1:map (*(a*b)) $ multEq a b
multEq a b = iterate (*(a*b)) 1

--------------------------------------------------------------------------------
-- Problema 2
--------------------------------------------------------------------------------
selectFirst :: [Int] -> [Int] -> [Int] -> [Int]
selectFirst [] _ _ = []
selectFirst _ [] _ = []
selectFirst (x:xs) l2 l3 =
    case (p2,p3) of
        (Nothing, _) -> next
        (_, Nothing) -> x:next
        (Just p2', Just p3') -> if p2' < p3' then x:next else next
    where
        p2   = indexOf l2 x 0
        p3   = indexOf l3 x 0
        next = selectFirst xs l2 l3

        indexOf :: (Eq a) => [a] -> a -> Int -> Maybe Int
        indexOf [] _ i = Nothing
        indexOf (x:xs) n i
            | n == x    = return i
            | otherwise = indexOf xs n (i+1)

--------------------------------------------------------------------------------
-- Problema 3
--------------------------------------------------------------------------------
myIterate :: (a -> a) -> a -> [a]
myIterate f x = scanl (\a _ -> f a) x [0..]

--------------------------------------------------------------------------------
-- Problema 4
--------------------------------------------------------------------------------
type SymTab a = String -> Maybe a

empty :: SymTab a
empty = const Nothing

get :: SymTab a -> String -> Maybe a
get = ($)

set :: SymTab a -> String -> a -> SymTab a
set st s v x
    | s == x = return v
    | otherwise = st x

--------------------------------------------------------------------------------
-- Problema 5
--------------------------------------------------------------------------------
data Expr a
    = Val a
    | Var String
    | Sum (Expr a) (Expr a)
    | Sub (Expr a) (Expr a)
    | Mul (Expr a) (Expr a)
    deriving Show

eval :: (Num a) => SymTab a -> Expr a -> Maybe a
eval st (Val v) = Just v
eval st (Var s) = st s
eval st (Sum a b) = do
    ea <- eval st a
    eb <- eval st b
    return $ ea+eb
eval st (Sub a b) = do
    ea <- eval st a
    eb <- eval st b
    return $ ea-eb
eval st (Mul a b) = do
    ea <- eval st a
    eb <- eval st b
    return $ ea*eb
