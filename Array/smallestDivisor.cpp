#include<iostream>
#include<climits>
#include<algorithm>
#include<cmath>
using namespace std;
int f(int *arr,int n,int mid){
    int sum=0;
    for(int i=0;i<n;i++){
       sum=sum+ceil((double)arr[i]/(double)mid);
    }
    return sum;
}
int main(){
int arr[]={1,2,5,9};
int n=sizeof(arr)/sizeof(arr[0]);
int threshold=7;
int ans=-1;
int maxi=INT_MIN;
for(int i=0;i<n;i++){
    maxi=max(arr[i],maxi);
}
if(n>threshold){
    cout<<-1;
    return 0;} 
int low=1,high=maxi;
while(low<=high){
    int mid=(low+high)/2;
    int result=f(arr,n,mid);
    if(result<=threshold){
         ans=mid;
         high=mid-1;
    }else{
        low=mid+1;
    }
}
cout<<ans;
    return 0;
}
