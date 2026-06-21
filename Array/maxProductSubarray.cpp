#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
vector<int> vrr={2,3,-2,4};
int n=vrr.size();
int maxi=INT_MIN;
int suffix=1,prefix=1;
for(int i=0;i<n;i++){
    if(prefix==0) prefix=1;
    if(suffix==0) suffix=1;
     
    suffix=suffix*vrr[n-i-1];
    prefix=prefix*vrr[i];
    maxi=max(maxi,max(suffix,prefix));
    
}

cout<<maxi;
return 0;
}
