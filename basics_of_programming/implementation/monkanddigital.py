    n = input()
    a = input()
    b = input()
    sum_of_a = sum(map(ord,a))
    sum_of_b = sum(map(ord,b))
    if sum_of_a == sum_of_b :
        print("YES")
    else:
        print("NO")
