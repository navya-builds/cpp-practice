#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int> vrr={2,1,5,4,3,0,0};
int n=vrr.size();
int index=-1;
int mini=-1;
for(int i=n-2;i>=0;i--){
    if(vrr[i]<vrr[i+1]){
      index=i;
        break;
    }
}
for(int i=n-1;i>index;i--){
    if(vrr[i]>vrr[index]){
        mini=i;
        break;
    }
}

swap(vrr[index],vrr[mini]);

reverse(vrr.begin()+index+1,vrr.end());

for(int i=0;i<n;i++){
    cout<<vrr[i]<<" ";
}

    return 0;
}
