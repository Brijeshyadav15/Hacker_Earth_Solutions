import sys
count=int(0)
l,r,k = map(int,sys.stdin.readline().split())
for i in range(l,r+1):
    if(i%k==0):
        count+=1
print(count)
