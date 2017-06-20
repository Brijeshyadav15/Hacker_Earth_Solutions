    T = int(input())
    for i in range(T):
        S = input()
        N = 0
        str1 = "WWBWW"
        N += S.count(str1) * 4
        S = S.replace(str1,"XXXXX")
        str1, str2 = "WWBW", "WBWW"
        N += S.count(str1) * 3
        S = S.replace(str1,"XXXX")
        N += S.count(str2) * 3
        S = S.replace(str2,"XXXX")
        str1, str2, str3 = "WBW", "WWB", "BWW"
        N += S.count(str1) * 2
        S = S.replace(str1,"XXX")
        N += S.count(str2) * 2
        S = S.replace(str2,"XXX")
        N += S.count(str3) * 2
        S = S.replace(str3,"XXX")
        str1, str2 = "WB", "BW"
        N += S.count(str1)
        S = S.replace(str1, "XX")
        N += S.count(str2)
        S = S.replace(str2, "XX")
        print(N)
