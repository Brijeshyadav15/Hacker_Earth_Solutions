    T=int(input())
    for i in range(T):
        n=int(input())
        s=input()
        c=0
        for j in range(n):
            if(s[j]=='0'):
                c+=1
        print(c)
