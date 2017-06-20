    T = int(input())
    for i in range(T):
        M = int(input())
        digitSum = 0
        solution = 0
        for j in range(M):
            S = input()
            S = list(map(int, S.split()))
            digitSum += (S[0] * S[1])
        singleDigit = len(str(digitSum)) == 1
        if singleDigit == True: solution = digitSum
        while singleDigit == False:
            solution = sum( [ int(str(digitSum)[i]) for i in range( 0, len(str(digitSum))) ] )
            digitSum = solution
            singleDigit = len(str(solution)) == 1
        print(solution)
