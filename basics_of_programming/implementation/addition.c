    #include <stdio.h>
    #include<string.h>
     
    int main()
    {
    int i,tc;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
    char str[100000];
    int lenStr,j;
    int sum=0;
    scanf("%s",str);
    lenStr=strlen(str);
    for(j=0;j<lenStr;j++)
    {
    sum=str[j]+str[lenStr-j-1]-192;
    if(sum>26)
    sum=sum-26;
    printf("%c",sum+96);
    }
    printf("\n");
    }
     
    return 0;
    }
