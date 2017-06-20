import sys
l=int(input())
n=int(input())
wi=[]
he=[]
for i in range(0,n):
    w,h = map(int,sys.stdin.readline().split())
    wi.append(w)
    he.append(h)
for i in range(0,n):
    if(wi[i]<l or he[i]<l):
        print("UPLOAD ANOTHER")
    elif(wi[i]>=l and he[i]>=l and wi[i]==he[i]):
        print("ACCEPTED")
    else:
        print("CROP IT")
