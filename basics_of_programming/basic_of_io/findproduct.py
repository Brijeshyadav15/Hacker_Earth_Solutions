import sys
 
n = int(input(""))
value = 1
list1 = list(map(int,input().split()))
for i in range(n):
	value = (value * list1[i]) % (1000000007)
 
print(value)
