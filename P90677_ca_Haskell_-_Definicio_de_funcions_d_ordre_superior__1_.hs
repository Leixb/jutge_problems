myFoldl :: (a -> b -> a) -> a -> [b] -> a
myFoldl _ z [] = z
myFoldl f z (x:l') = myFoldl f (f z x) l'

myFoldr :: (a -> b -> b) -> b -> [a] -> b
myFoldr _ z [] = z
myFoldr f z (x:l') = f x $ myFoldr f z l'

myIterate :: (a -> a) -> a -> [a]
myIterate f a = a : myIterate f (f a)

myUntil :: (a -> Bool) -> (a -> a) -> a -> a
myUntil c f s
    | c s = s
    | otherwise = myUntil c f (f s)

myMap :: (a -> b) -> [a] -> [b]
myMap f l = [ f x | x <- l ]

myFilter :: (a -> Bool) -> [a] -> [a]
myFilter f l = [ x | x <- l, f x ]

myAll :: (a -> Bool) -> [a] -> Bool
--myAll f = foldr (\a b -> f a && b) True
myAll f = foldr ((&&) . f) True

myAny :: (a -> Bool) -> [a] -> Bool
--myAny f = foldr (\a b -> f a || b) False
myAny f = foldr ((||) . f) False

myZip :: [a] -> [b] -> [(a, b)]
myZip _ [] = []
myZip [] _ = []
myZip (a:xa) (b:xb) = (a, b) : myZip xa xb

myZipWith :: (a -> b -> c) -> [a] -> [b] -> [c]
myZipWith f a b = [ f x y | (x, y) <- zip a b ]
