data Tree a = Node a (Tree a) (Tree a) | Empty deriving (Show)

size :: Tree a -> Int
size Empty = 0
size (Node root lc rc) = 1 + ( size lc +  size rc  )

height :: Tree a -> Int
height Empty = 0
height (Node root lc rc) = 1 + max (height lc) (height rc)

equal :: Eq a => Tree a -> Tree a -> Bool
equal Empty Empty = True
equal (Node rootA lcA rcA) (Node rootB lcB rcB) =
    rootA == rootB && equal lcA lcB && equal rcA rcB
equal _ _ = False

isomorphic :: Eq a => Tree a -> Tree a -> Bool
isomorphic Empty Empty = True
isomorphic (Node rootA lcA rcA) (Node rootB lcB rcB) =
    rootA == rootB && ( (isomorphic lcA lcB && isomorphic rcA rcB) || (isomorphic lcA rcB && isomorphic rcA lcB) )
isomorphic _ _ = False

preOrder :: Tree a -> [a]
preOrder Empty = []
preOrder (Node root cl cr) =
    root : preOrder cl ++ preOrder cr

postOrder :: Tree a -> [a]
postOrder Empty = []
postOrder (Node root cl cr) =
    postOrder cl ++ postOrder cr ++ [root]

inOrder :: Tree a -> [a]
inOrder Empty = []
inOrder (Node root cl cr) =
    inOrder cl ++ root : inOrder cr

breadthFirst :: Tree a -> [a]
breadthFirst Empty = []
breadthFirst t =
    concat (bfs t)
        where
            merge :: [[a]] -> [[a]] -> [[a]]
            merge [] a = a
            merge a [] = a
            merge (ax:axs) (bx:bxs) = (ax ++ bx) : merge axs bxs

            bfs :: Tree a -> [[a]]
            bfs Empty = []
            bfs (Node root cl cr) =
                [root] : merge (bfs cl) (bfs cr)


build :: Eq a => [a] -> [a] -> Tree a
build [] [] = Empty
build pre@(px:pxs) post =
    Node px (build preL postL) (build preR postR)
        where
            (postL,_:postR) = span (/= px) post
            (preL, preR) = splitAt (length postL) pxs

overlap :: (a -> a -> a) -> Tree a -> Tree a -> Tree a
overlap _ Empty Empty = Empty
overlap _ Empty node = node
overlap _ node Empty = node
overlap func (Node rA lcA rcA) (Node rB lcB rcB) =
    Node (func rA rB) (overlap func lcA lcB) (overlap func rcA rcB)
