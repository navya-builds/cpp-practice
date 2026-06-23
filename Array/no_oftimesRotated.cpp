#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
int arr[]={5,6,7,1,2,3,4};
int n=sizeof(arr)/sizeof(arr[0]);
int low=0,high=n-1;
int mini=INT_MAX;
int index=-1;
while(low<=high){
    int mid=(low+high)/2;
    if(arr[low]<=arr[high]){
        if(arr[low]<mini){
           mini=arr[low];
           index=low;
        }
        break;
    }
    if(arr[low]<=arr[mid]){
        mini=min(mini,arr[low]);
        index=low;
        low=mid+1;
    }

    else{ mini=min(arr[mid],mini);
        index=mid;
        high=mid-1;
       
    }
    }
cout<<index;

    return 0;
}

