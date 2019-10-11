import Control.Applicative

data Queue a = Queue [a] [a] deriving (Show)

create :: Queue a
create = Queue [] []

push :: a -> Queue a -> Queue a
push elem (Queue a b) = Queue a (elem:b)

pop :: Queue a -> Queue a
pop (Queue [] b) = pop (Queue (reverse b) [])
pop (Queue (_:axs) b) = Queue axs b

top :: Queue a -> a
top (Queue [] b) = last b
top (Queue a _) = head a

empty :: Queue a -> Bool
empty (Queue [] []) = True
empty _ = False

instance Eq a => Eq (Queue a)
     where
         (Queue a b) == (Queue a' b') = a ++ reverse b == a' ++ reverse b'

instance Functor Queue where
    fmap f (Queue a b) = Queue (map f a) (map f b)

translation :: Num b => b -> Queue b -> Queue b
translation n = fmap (+n)

instance Applicative Queue where
    pure x = Queue [x] []
    --(Queue fa fb) <*> (Queue a b) = Queue [ f x | f <- (fa ++ reverse fb), x <- (a ++ reverse b)] []
    (Queue fa fb) <*> (Queue a b) = Queue ((fa ++ reverse fb) <*> (a ++ reverse b)) []

instance Monad Queue where
    return x = Queue [x] []
    --(Queue a b) >>= f             = Queue [y | x <- a ++ reverse b, (Queue y z) <- f x] []
    --(Queue a b) >>= f             = Queue [y | x <- a ++ reverse b, (Queue y z) <- f x] []
    --(Queue a b) >>= f = concatMap f (a ++ reverse b)
    --(Queue a b) >>= f             = (a ++ reverse b) >>= f
    --(Queue a b) >>= f             = (a ++ reverse b) >>= f
    (Queue a b) >>= f   = flatten [f x | x <- a ++ reverse b]

merge :: Queue a -> Queue a -> Queue a
merge (Queue a b) (Queue a' b') = Queue (a ++ reverse b ++ a') b'

flatten :: [Queue a] -> Queue a
flatten [] = create
flatten [q] = q
flatten (a:xs) = merge a $ flatten xs

kfilter :: (p -> Bool) -> Queue p -> Queue p
kfilter f q = do
    q' <- q
    if f q' then return q'
    else create
