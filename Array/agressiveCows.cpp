#include<iostream>
#include<algorithm>
using namespace std;
bool f(int *arr,int n,int dist,int cntcows){
    int cnt=1,last=arr[0];
    for(int i=0;i<n;i++){
        if((arr[i]-last)>=dist){
            cnt++;
             last=arr[i];
        }
    }
    if(cnt>=cntcows) return true;
    else{
        return false;
    }
}
int main(){
int arr[]={0,3,7,4,10,9};
int cntcows=4;
int n=sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+n);
int low=1,high=(arr[n-1]-arr[0]);
while(low<=high){
int mid=(low+high)/2;
int result=f(arr,n,mid,cntcows);
if(result==true){
    low=mid+1;
}
else{
high=mid-1;
}
}
   cout<<high;
    return 0;
}
