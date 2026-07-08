#include<iostream>
#include<vector>
using namespace std;
int check(const vector<int>& arr,int n,int k){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            return mid;
            break;
        }
        else if(arr[mid]>k){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    
        return -1;

}
int main(){
vector<vector<int>> mat={
    {1,2,3},
{4,5,6},
{7,8,9},
};
int k=8;
int m=mat.size();
int n=mat[0].size();
for(int i=0;i<m;i++){
    int result=check(mat[i],n,k);
    if(result!=-1){
        cout<<i<<","<<result<<endl;
    }
}

return 0;
}
