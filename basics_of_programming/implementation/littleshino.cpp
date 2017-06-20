    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
     
    int main(){
     
    int k,i,j,len,c=0;
    string str;
    cin>>k;
    cin>>str;
    len=str.size();
     
    vector<char> vec;
     
    for(i=0;i<len;i++){
     
    for(j=i;j<len;j++){
     
    if(find(vec.begin(),vec.end(),str[j])==vec.end())
    vec.push_back(str[j]);
     
    if(vec.size()==k){
    c+=1;
    }
     
    if(vec.size()>k){
    break;
    }
     
    }
     
    vec.clear();
    }
     
    cout<<c<<"\n";
     
    return 0;
    }
