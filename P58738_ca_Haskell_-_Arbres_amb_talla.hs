import Data.Functor

data STree a = Nil | Node Int a (STree a) (STree a) deriving Show

isOk :: STree a -> Bool
isOk Nil = True
isOk (Node t _ fillE fillD) =
    t == 1+ talla fillE + (talla fillD) && isOk fillE && isOk fillD
    --where
talla :: STree a -> Int
talla Nil = 0
talla (Node _ _ fillE fillD) = 1 + (talla fillE) +  (talla fillD)

nthElement :: STree a -> Int -> Maybe a
nthElement Nil _ = Nothing
nthElement (Node t v fillE fillD) n = 
    case compare pos n of
        EQ -> Just v
        LT -> nthElement fillD (n-pos)
        GT -> nthElement fillE n
    where 
        tE = getTalla fillE
        tD = getTalla fillD
        pos = tE + 1
        getTalla Nil = 0
        getTalla (Node t _ _ _) = t

mapToElements :: (a -> b) -> STree a -> [Int] -> [Maybe b]
mapToElements _ _ [] = []
mapToElements f t (x:xs) = (fmap f (nthElement t x)):(mapToElements f t xs)

instance Functor STree where
    fmap _ Nil = Nil
    fmap f (Node t a fillE fillD) = Node t (f a) (fmap f fillE) (fmap f fillD)
