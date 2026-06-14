#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int arr[]={7,1,5,3,6,4};
int n=sizeof(arr)/sizeof(arr[0]);
int cost=0;
int profit=0;
int mini=arr[0];
for(int i=0;i<n;i++){
  cost=arr[i]-mini;
  profit=max(profit,cost);
  mini=min(mini,arr[i]);
}

cout<<profit;

return 0;
}
