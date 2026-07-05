#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int f(int *arr,int n,int pages){
    int cntstu=1,pagesStudent=0;
 for(int i=0;i<n;i++){
    if((pagesStudent+arr[i])<=pages){
        pagesStudent+=arr[i];
    }else{
        cntstu++;
        pagesStudent=arr[i];
    }
 }

return cntstu;

}
int main(){
int arr[]={25,46,28,49,24};
int m=4;
int n=sizeof(arr)/sizeof(arr[0]);
int maxi=INT_MIN;
int sum=0;
for(int i=0;i<n;i++){
    maxi=max(maxi,arr[i]);
    sum=sum+arr[i];
}
int low=maxi,high=sum;
while(low<=high){
    int mid=(low+high)/2;
if(f(arr,n,mid)<=m){
    high=mid-1;   
}
else{
 low=mid+1;
}
}
cout<<low;
    return 0;
}
