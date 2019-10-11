data Expr = Val Int | Add Expr Expr | Sub Expr Expr | Mul Expr Expr | Div Expr Expr

eval1 :: Expr -> Int
eval1 (Val x) = x
eval1 (Add a b) = eval1 a + eval1 b
eval1 (Sub a b) = eval1 a - eval1 b
eval1 (Mul a b) = eval1 a * eval1 b
eval1 (Div a b) = eval1 a `div` eval1 b

eval2 :: Expr -> Maybe Int
eval2 (Val x) = Just x
eval2 (Add a b) = do
    a' <- eval2 a
    b' <- eval2 b
    Just $ a' + b'
eval2 (Sub a b) = do
    a' <- eval2 a
    b' <- eval2 b
    Just $ a' - b'
eval2 (Mul a b) = do
    a' <- eval2 a
    b' <- eval2 b
    Just $ a' * b'
eval2 (Div a b) = do
    a' <- eval2 a
    b' <- eval2 b
    if b' == 0
        then Nothing
        else Just $ a' `div` b'

eval3 :: Expr -> Either String Int
eval3 (Val x) = Right x
eval3 (Add a b) = do
    a' <- eval3 a
    b' <- eval3 b
    Right $ a' + b'
eval3 (Sub a b) = do
    a' <- eval3 a
    b' <- eval3 b
    Right $ a' - b'
eval3 (Mul a b) = do
    a' <- eval3 a
    b' <- eval3 b
    Right $ a' * b'
eval3 (Div a b) = do
    a' <- eval3 a
    b' <- eval3 b
    if b' == 0
        then Left "div0"
        else Right $ a' `div` b'
