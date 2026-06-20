#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int> vrr={-2,-2,-2,-1,-1,-1,0,0,0,1,1,1,2,2,2};
sort(vrr.begin(),vrr.end());
int n=vrr.size();
vector<vector<int>> ans;
for(int i=0;i<n-2;i++){
    if(i>0 && vrr[i]==vrr[i-1]) continue;
    int j=i+1,k=n-1;
    while(j<k){
    int sum=vrr[i]+vrr[j]+vrr[k];
    if(sum>0){
        k--;
    }
    else if(sum<0){
        j++;
    }
    else{
        vector<int> temp={vrr[i],vrr[j],vrr[k]};
        ans.push_back(temp);
        j++;
        k--;
        while(j<k && vrr[j]==vrr[j-1]) j++;
        while(j<k && vrr[k]==vrr[k-1]) k--;
    }
}
}
for(int i=0;i<ans.size();i++){
    for(int s:ans[i]){
    cout<<s<<" ";
}
cout<<endl;
}
    return 0;
}
