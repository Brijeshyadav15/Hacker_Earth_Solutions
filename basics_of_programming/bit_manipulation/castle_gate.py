    count = 0
    num_array = list()
    num = raw_input("")
    for i in range(int(num)):
        n = raw_input("")
        num_array.append(int(n))
    for p in num_array:
        for j in range (1,p+1):
            for k in range (1,j+1):
                xor = j ^ k
                if xor <= p and xor != 0:
                    count = count+ 1
        print count
        count = 0
