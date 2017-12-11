saluda :: String -> String
saluda nom
    | lletra_final == 'a' = "Hola maca!"
    | lletra_final == 'A' = "Hola maca!"
    | otherwise = "Hola maco!"
        where lletra_final = last nom

main = do
    nom <- getLine
    putStrLn $ saluda nom
