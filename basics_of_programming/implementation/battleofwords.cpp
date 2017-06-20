    #include <iostream>
    using namespace std ;
    int main()
    {
    int t ;
    cin >> t ;
    //getchar() ;
    while ( t--)
    {
    string p ;
    string q ;
     
    int a[26] = {0} ;
    int b[26] = {0} ;
    getchar() ;
    getline ( cin , p ) ;
    // getchar() ;
    getline ( cin , q ) ;
    // cout << p <<endl;
    // cout << q <<endl;
    int ty = 0 ;
    int tr = 0 ;
    int i ;
    for ( i = 0 ; i <p.length() ; i++)
    {
    a[p[i]-'a']++ ;
    }
    for ( i = 0 ; i< q.length() ; i++)
    {
    b[q[i]-'a']++ ;
    }
    for ( i = 0 ; i< 26 ; i++)
    {
    if ( a[i] > b[i])
    {
    ty++ ;
    }
    else if ( a[i] < b[i])
    {
    tr++ ;
    }
    else
    {
     
    }
    }
    if ( ty == 0 && tr !=0 )
    {
    cout << "You lose some." <<endl;
    }
    else if ( ty != 0 && tr == 0 )
    {
    cout << "You win some." <<endl;
    }
    else
    {
    cout << "You draw some." <<endl;
    }
    }
    return 0 ;
     
    }
