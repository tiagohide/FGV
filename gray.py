def gen (n):
    if n == 0:
        return ['']
    for x in gen(n-1): 
        z = '0'+x
    for y in gen(n-1): 
        u = '1'+y
    return [z+u] 

inp = int(raw_input("Gera codigo de gray de tamanho: "))
print gen(inp)
#print [gen(inp)[0][::-1]]
