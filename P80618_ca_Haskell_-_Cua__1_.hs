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
         (==) (Queue a b) (Queue a' b') = a ++ reverse b == a' ++ reverse b'
