    T=int(input())
    ec=0
    oc=0
    for i in range(T):
        n=int(input())
        num = list(map(int, input().split()))
        for j in num:
            if(j%2==0):
                ec+=1
            else:
                oc+=1
        print(ec*oc)
        oc=0
        ec=0
