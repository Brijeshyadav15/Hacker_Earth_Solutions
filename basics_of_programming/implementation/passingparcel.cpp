    #include<iostream>
    #include<vector>
    using namespace std;
     
    int main(){
    vector<int> vec;
    int n,len,i,j,val,tmp;
    string str;
    cin>>n;
     
    for(i=1;i<=n;i++)
    vec.push_back(i);
     
    cin>>str;
    len=str.size();
     
    i=0;
    j=0;
    while(i<len){
     
    if(str[i]=='a') {
     
    j+=1;
     
    }
    else{
     
    vec.erase(vec.begin()+j);
    }
     
    i++;
     
    if(vec.size()==1)
    break;
     
    if(j==vec.size())
    j=0;
     
    if(i==len)
    i=0;
     
    }
     
    cout<<vec[0]<<"\n";
     
    return 0;
    }
