t=int(input())
for i in range(t):
    a,n= map(int,input().split())
    arr = list(map(int, input().split()))
    ammo=a
    index=0
    for j in range(n):
        if arr[j]==1:
            if j<n and ammo >0:
                ammo +=2
                index+=1
            elif j==n and ammo==0:
                ammo +=2
                index+=1
        elif arr[j]==0 and ammo > 0:
            ammo -=1
            index+=1
    if ammo > 0:
        print("Yes",ammo)
    elif index==n  and ammo ==0:
        print("Yes",ammo)
    elif ammo < 0 or ammo ==0:
        print("No",index)
    
