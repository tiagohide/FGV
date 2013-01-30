#recursive list
#code by tvilas at hushmail dot com
# https://github.com/tiagohide/FGV/


def permuta(y):
    if y:
        li1 , li2 = [],[]
        for x in y:
            if x not in li2:
                z = y[:]; z.remove(x)
                for p in permuta(z):
                    li1.append([x]+p)
            li2.append(x)
        return  li1 
    else:
        return [[]]


def read(n):
    li3 = []
    if (n==0):  #nao muito usual mas resolve problema caso se insira 0
        li3.append(n)
        print permuta(li3)
    for i in range(n):
        li3.append(i)
        print permuta(li3)

x = int(raw_input("Insira a quantidade de elementos: "))
read(x)

