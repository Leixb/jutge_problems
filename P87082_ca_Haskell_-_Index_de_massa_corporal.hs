interpretacio_imc :: Double -> Double -> String
interpretacio_imc m h
    | imc < 18 = "magror"
    | imc < 25 = "corpulencia normal"
    | imc < 30 = "sobrepes"
    | imc < 40 = "obesitat"
    | otherwise = "obesitat morbida"
        where imc = m/(h^2)

procesa :: String -> String
procesa linea =
    let sep = words linea
        nom = head sep
        m = read (sep!!1) :: Double
        h = read (sep!!2) :: Double
    in nom ++ ": " ++ interpretacio_imc m h

main = do
    linea <- getLine
    putStrLn $ procesa linea
    main
