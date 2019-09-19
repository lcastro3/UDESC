soma :: Int -> Int -> Int
soma a b = a + b

maiorQueDez :: Int -> String
maiorQueDez numero = 
    if numero > 10 then
        "maior"
    else
        "menor"

fibonacci :: Int -> Int 
fibonacci cont = 
    if cont < 2 then
        cont
    else 
        fibonacci(cont-1) + fibonacci(cont-2)


func :: Int -> Int
func n = 
    if n == 1 then
        n
    else 
        n + func(n-1)