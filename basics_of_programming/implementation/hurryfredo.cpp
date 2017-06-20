    #include <iostream>
    #include<math.h>
    using namespace std;
     
    int main()
    {
    int t;
    cin>>t;
    while(t--)
    {
    long long int n , ans , x;
    cin>>n;
    x = (-3 + sqrt(9+(8*n)))/2; // quadratic equation is formed as per given question as [f(f+1)]/2 = n-f ..solving this u get this equations
    ans = 2*(n-x);
    if(n>1)
    cout<<ans<<endl;
    else
    cout<<"1"<<endl;
    }
    return 0;
    }
