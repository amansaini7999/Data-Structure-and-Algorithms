a = int(input())
b = int(input())

def solve(a,b):
    from math import log10
    first = 1
    flag = False
    last = 1
    e = 0
    for i in range(a,b+1):
        first *=i
        last*=i
        if len(str(first))>10:
            first = int(str(first)[:10])
        while last%10==0:
            last//=10
            e+=1
        if len(str(last))>10:
            flag = True
            last = int(str(last)[-10:])
    first = str(first)
    last = str(last)
    if flag:
        return first[:5]+"..."+last[-5:]+" * 10^"+str(e)
    else:
        return last+" * 10^"+str(e)
print(solve(a,b))
