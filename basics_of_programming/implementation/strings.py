    t = int(raw_input())
    for a0 in xrange(t):
        n,m = map(int,raw_input().split())
        n = str(n)
        m = str(m)
        if n==m:
            print "YES"
        elif len(n)==1 and len(m)==1:
            if ((n=="4" and m=="2") or (n=="2" and m=="4")):
                print "YES"
            else:
                print "NO"
        else:
            print "NO"
