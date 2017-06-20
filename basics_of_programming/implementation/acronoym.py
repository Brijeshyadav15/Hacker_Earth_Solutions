    l = [raw_input() for x in range(int(raw_input()))]
    wn = int(raw_input())
    print ".".join(map(lambda x: x[0].upper(),filter(lambda x:x not in l,raw_input().split())))
