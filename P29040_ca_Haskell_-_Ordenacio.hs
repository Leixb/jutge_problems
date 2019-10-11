insert :: [Int] -> Int -> [Int]
insert [] x = [x]
insert (y:ys) x = if x <= y
      then x:y:ys
      else y : insert ys x

isort :: [Int] -> [Int]
isort [] = []
isort (x : xs) = insert (isort xs) x

remove :: [Int] -> Int -> [Int]
remove [] _ = []
remove (x:xs) valor =
    if x == valor
        then xs
        else x: remove xs valor

ssort :: [Int] -> [Int]
ssort [] = []
ssort l =
    let min = minimum l
        l' = ssort $ remove l min
    in min:l'

merge :: [Int] -> [Int] -> [Int]
merge x [] = x
merge [] y = y
merge (x:xs) (y:ys) =
    if x < y
        then x: merge xs (y:ys)
        else y: merge (x:xs) ys

msort :: [Int] -> [Int]
msort [] = []
msort [x] = [x]
msort l =
    let list_lenght = length l
        half = div list_lenght 2
        a = msort $ take half l
        b = msort $ drop half l
    in merge a b

qsort :: [Int] -> [Int]
qsort [] = []
qsort (x:xs) = let bigger = [ y | y <- xs, y >= x ]
                   smaller = [ y | y <- xs, y < x ]
               in qsort smaller ++ [x] ++ qsort bigger

genQsort :: (Ord a) => [a] -> [a]
genQsort [] = []
genQsort (x:xs) = let smaller = genQsort $ filter (<= x) xs
                      bigger = genQsort $ filter (> x) xs
                  in smaller ++ [x] ++ bigger
