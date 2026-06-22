#include<iostream>
using namespace std;
int searchindex(int arr[],int low,int high,int x){
  int ans=0;
  while(low<=high){
    int mid=(low+high)/2;
   if(arr[mid]>=x){
    ans=mid;
    high=mid-1;
   }else{
    low=mid+1;
   }

  }

  return ans;
}
int main(){
int arr[]={1,3,4,8,9};
int n=sizeof(arr)/sizeof(arr[0]);
int result=searchindex(arr,0,n-1,6);

cout<<result;
return 0;


}
