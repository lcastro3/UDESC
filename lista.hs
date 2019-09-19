--pegar a cauda de uma lista

cauda :: [Int] -> [Int]
cauda(x:y) =
    y

--pegar o ultimo item de uma lista 
ultimo :: [Int] -> Int
ultimo (x:[]) =  --encontrar a ultima celula da lista e retornala
    x
ultimo (x:y) =  --retornando o ultimo termo da celula 
    ultimo(y)
    