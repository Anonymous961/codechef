for _ in range(int(input())):
    n,m=map(int,input().split())
    l=list(map(int,input().split()))
    l.sort()
    nl=[]
    ans=-float("inf")
    for i in range(n):
        nl.append((l[i]-l[n-1])%m)
    for i in range(n):
        ans=max(ans,nl[i]+l[i]+l[n-1])
    print(ans)