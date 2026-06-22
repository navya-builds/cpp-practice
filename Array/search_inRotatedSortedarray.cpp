#include<iostream>
using namespace std;
int main(){
int arr[]={7,8,1,3,5};
int n=sizeof(arr)/sizeof(arr[0]);
int low=0,high=n-1;
int key=8;
int found=0;
while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==key){
        cout<<mid;
        found=1;
        break;
    }
if(arr[low]<=arr[mid]){
  if(arr[low]<=key && key<=arr[mid]){
     high=mid-1;
  }else{
    low=mid+1;
  }
}
else{ 
       if(arr[mid]<=key && key<=arr[high]){
        low=mid+1;
       }
       else{
        high=mid-1;
       }

}

}
if(found==0) cout<<"Not found";



return 0;



}
