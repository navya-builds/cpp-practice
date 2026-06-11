#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter a string";
    cin>>s;
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int q;
    cout<<"no of queries";
    cin>>q;
    while(q--){
    char c;
    cout<<"enter charcater";
    cin>>c;
    cout<<hash[c-'a']<<endl;

    }

    return 0;
}
