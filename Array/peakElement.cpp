#include<iostream>
using namespace std;
int main(){
int arr[]={1,10,13,7,6,5,4,2,1,0};
int n=sizeof(arr)/sizeof(arr[0]);
int peak=0;
if(n==1){
    peak=arr[0];
}
if(arr[0]>arr[1]){
    peak=arr[0];
    }
if(arr[n-1]>arr[n-2]) {
    peak=arr[n-1];

}
int low=1,high=n-2;
while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid]){
        peak=arr[mid];
        break;
    }
else if(arr[mid-1]<arr[mid]){
    low=mid+1;
}else {
    high=mid-1;
     
}
}
cout<<peak;

return 0;
}
