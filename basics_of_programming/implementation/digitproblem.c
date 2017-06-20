    int main()
    {
    long long int x ;
    scanf("%lld" , &x);
     
    int k ;
    scanf("%d", &k);
     
    long long int max = (int)log10(x) + 1 ;
     
    int arr[max] ;
     
     
    long long int  temp = x ;
    long long int  i ;
    for(i = max -1  ; i >= 0  ; i-- )
    {
        arr[i] = temp % 10 ;
        temp = temp / 10 ;
    }
     
    i = 0 ;
    int cnt = k ;
    while(cnt != 0)
    {
        if(arr[i] != 9)
    {
        arr[i] = 9 ;
        cnt = cnt - 1 ;
    }
     
    i = i + 1 ;
     
    }
     
    // JUST PRINT THE ARRAY
    for(i=0;i<max;i++)
        printf("%d",arr[i]);
    return 0;
    }
