def count(elemlst) :
    cont=0
    for i in range(n):
        a=elemlst[i]
        id1=i
        id2=i
        if i==0:
            while elemlst[id2+1]==a:
                id2+=1
            if elemlst[id2+1]<=a+z and elemlst[id2+1]>=a-z:
                cont+=1
        elif i<n-1:
            while elemlst[id2+1]==a:
                 id2+=1
            while elemlst[id1-1]==a:
                 id1-=1
            if (elemlst[id1-1]<=a+z and elemlst[id1-1]>=a-z) or (elemlst[id2+1]<=a+z and elemlst[id2+1]>=a-z):
                 cont+=1
        else:
            while elemlst[id1-1]==a:
                id1-=1
            if elemlst[id1-1]<=a+z and elemlst[id1-1]>=a-z:
                cont+=1
    return cont
n,z=map(int,input().split())
elemlst=list(map(int,input().split()))
elemlst.sort()
print(count(elemlst))
