    from math import floor
    def GCD(a,b):
    	a,b = sorted([a,b][::-1])
    	if b % a == 0:
    		return a
    	return GCD(a,b%a)
     
    def baseConvert(N,B):
    	i = 0
    	while N >= B**i:
    		i += 1
    	final = []
    	while N > 0:
    		x = floor(N/(B**i))
    		final.append(x)
    		N -= x*(B**i)
    		i -= 1
    	return final[1:]
     
    T = int(input().strip())
    for a1 in range(T):
        N = int(input().strip())
        total = 0
        for i in range(2,N):
            total += sum(baseConvert(N,i))
        print(int((N-2)/GCD(total,N-2)))
