    #include <stdio.h>
    #include<string.h>
    int main()
    {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
    int h,m,n,c=0,flag=0;
    long long int d=1;
    char str[10];
    scanf("%s",str);
    for(int j=0;j<strlen(str);j++)
    {
    d*=str[j]-96;
    }
    h=strlen(str);
    for(int j=0;j<strlen(str);j++)
    {
    if(str[j] != str[h-j-1]){
    flag = 1;
    break;
    }
    }
    if(flag)
    {
    printf("%llu\n",d);
    }
    else
    {
    printf("Palindrome\n");
    }
     
    }
    return 0;
    }
