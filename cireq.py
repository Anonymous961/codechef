def posi(l):
    for i in range(len(l)):
        if(l[i]<=i):
            return 0
    return 1

t=int(input())
while t>0:
    n=int(input())
    l=map(int,input().split());
    c=1
    for i in range(1,n):
        if(posi(l[i:n+1])):
            c+=1
            print(c)
            break
        c+=1
    t-=1

