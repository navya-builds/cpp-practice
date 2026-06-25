#include<iostream>
#include<algorithm>
using namespace std;
int f(int m,int n){
    if(n==0) return 1;
   return m*f(m,n-1);
}
int main(){
int m=64;
int n=3;
int ans=0;
int found=0;
int low=1,high=64;
while(low<=high){
int mid=(low+high)/2;
if(f(mid,3)==m){
    ans=mid;
    found=1;
    break;
}
else if(f(mid,3)>m){
    high=mid-1;
}
else{
    low=mid+1;
}
}
if(found==0) cout<<-1;
else{
cout<<ans;}

return 0;

}
 
