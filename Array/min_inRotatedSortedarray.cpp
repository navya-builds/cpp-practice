#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
int arr[]={5,6,7,1,2,3,4};
int n=sizeof(arr)/sizeof(arr[0]);
int low=0,high=n-1;
int mini=INT_MAX;
while(low<=high){
    int mid=(low+high)/2;
    if(arr[low]<=arr[high]){
        mini=min(mini,arr[low]);
        break;
    }
    if(arr[low]<=arr[mid]){
        mini=min(mini,arr[low]);
        low=mid+1;
    }
    else{
            mini=min(arr[mid],mini);
            high=mid-1;
        }

    
    }

cout<<mini;

    return 0;
}

