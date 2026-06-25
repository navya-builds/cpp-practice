#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int possible(int arr[],int n,int day,int k){
    int cnt=0;
    int ans=0;
    for(int i=0;i<n;i++){
       if(arr[i]<=day){
        cnt++;
       }else{
        ans=ans+(cnt/k);
        cnt=0;
       }
}
ans=ans+(cnt/k);
return ans;
}
int main(){
int arr[]={7,7,7,7,13,11,12,7};
int n=sizeof(arr)/sizeof(arr[0]);
int m=3;
int k=2;
int mini=INT_MAX;
int maxi=INT_MIN;
int final_ans=-1;
for(int i=0;i<n;i++){
    maxi=max(maxi,arr[i]);
    mini=min(mini,arr[i]);
}    
       int low=mini,high=maxi;
       while(low<=high){
        int mid=(low+high)/2;
        int result=possible(arr,n,mid,2);
        if(result>=m){
            final_ans=mid;
            high=mid-1;
        }else if(result<m){
            low=mid+1;
        }
       }

cout<<final_ans;

    return 0;
}

