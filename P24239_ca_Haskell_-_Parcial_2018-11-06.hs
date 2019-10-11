--------------------------------------------------------------------------------
-- Problema 1
--------------------------------------------------------------------------------
roman2int :: String -> Int
roman2int s = r2i s 0
    where
        r2i :: String -> Int -> Int
        r2i "" _ = 0
        r2i (x:xs) prev
          | prev < val  = val - prev*2 + r2i xs val
          | otherwise   = val + r2i xs val
            where
                val :: Int
                val = case x of
                    'I' -> 1
                    'V' -> 5
                    'X' -> 10
                    'L' -> 50
                    'C' -> 100
                    'D' -> 500
                    'M' -> 1000

--------------------------------------------------------------------------------
-- Problema 2
--------------------------------------------------------------------------------
roman2int' :: String -> Int
roman2int' = snd . foldl r2i (0, 0)
    where
        r2i :: (Int, Int) -> Char -> (Int, Int)
        r2i (prev, accumul) c
          | prev < val  = (val, accumul + val - prev*2)
          | otherwise   = (val, accumul + val)
            where
                val :: Int
                val = case c of
                    'I' -> 1
                    'V' -> 5
                    'X' -> 10
                    'L' -> 50
                    'C' -> 100
                    'D' -> 500
                    'M' -> 1000
--------------------------------------------------------------------------------
-- Problema 3
--------------------------------------------------------------------------------
arrels :: Float -> [Float]
arrels x = map (f x) [1..]
    where
        f x 1 = x
        f x n = let fprev = f x (n-1)
                 in (fprev + x/fprev)/2

--------------------------------------------------------------------------------
-- Problema 4
--------------------------------------------------------------------------------
arrel :: Float -> Float -> Float
arrel x e = snd $ head $ dropWhile (\(prev,act) -> abs (prev - act) > e) $ zip ((x+e+1):arrels x) (arrels x)

--------------------------------------------------------------------------------
-- Problema 5
--------------------------------------------------------------------------------
data LTree a = Leaf a | Node (LTree a) (LTree a)

instance Show a => Show (LTree a) where
    show (Leaf a) = '{': show a ++ "}"
    show (Node a b) = '<' : show a ++ ',':show b ++ ">"

--------------------------------------------------------------------------------
-- Problema 6
--------------------------------------------------------------------------------
build :: [a] -> LTree a
build [x] = Leaf x
build l = Node (build l1) (build l2)
    where
        len = length l
        i = (len `div` 2) + len `mod` 2
        (l1, l2) = splitAt i l

--------------------------------------------------------------------------------
-- Problema 7
--------------------------------------------------------------------------------
zipLTrees :: LTree a -> LTree b -> Maybe (LTree (a,b))
zipLTrees (Leaf a) (Leaf b) = Just $ Leaf (a, b)
zipLTrees (Node ax ay) (Node bx by) = do
    x <- zipLTrees ax bx
    y <- zipLTrees ay by
    return $ Node x y
zipLTrees _ _ = Nothing
