    #include <iostream>
    using namespace std;
     
    int main()
    {
    long long int n,i,c=0;
    cin>>n;
    int a[7]={0};
    string s;
    cin>>s;
    if(n<11)
    cout<<"0";
     
    else
    {
    for(i=0;i<n;i++)
    {
    if(s[i]=='h')
    a[0]++;
    else if(s[i]=='a')
    a[1]++;
    else if(s[i]=='c')
    a[2]++;
    else if(s[i]=='k')
    a[3]++;
    else if(s[i]=='e')
    a[4]++;
    else if(s[i]=='r')
    a[5]++;
    else if(s[i]=='t')
    a[6]++;
     
    }
     
     
    a[0]=a[0]/2;
    a[1]=a[1]/2;
    a[4]=a[4]/2;
    a[5]=a[5]/2;
     
    c=a[0];
    for(i=0;i<7;i++)
    {
    if(c>a[i])
    c=a[i];
    }
    cout<<c;
    }
     
    return 0;
    }
