s = input()
s= s.casefold()
r = reversed(s)
 
if list(s) == list(r):
   print("YES")
else:
   print("NO")
