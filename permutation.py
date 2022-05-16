t=int(input())
while t:
    t-=1
    n=int(input())
    l=[]
    for i in range(n):
        a=int(input())
        l.append(a)
    l.sort()
    c=0
    for i in range(n):
        if (l[i+1]-l[i]!=1):
            c+=1
    print(c)

    
