#include<iostream>
using namespace std;
int lb(int arr[],int low,int high,int x){
    int first=-1,last=-1;
while(low<=high){
int mid=(low+high)/2;
if(arr[mid]>=x){
    first=mid;
    high=mid-1;
}else{
    low=mid+1;
}
}
}
int ub(int arr[],int low,int high,int x){
int first=-1,last=-1;
while(low<=high){
    int mid=(low+high)/2;
if(arr[mid]>x){
    last=mid;
    high=mid-1;
}else{
    low=mid+1;
}
}
}

int main(){
int arr[]={1,2,4,4,5,8,8,8,11};
int n=sizeof(arr)/sizeof(arr[0]);
int x=4;
int result=lb(arr,0,n-1,4);
int result2=ub(arr,0,n-1,4);
if(arr[result]!=x || result==n) cout<<-1<<" "<<-1;
else cout<<result<<endl<<result2-1;

return 0;
}
