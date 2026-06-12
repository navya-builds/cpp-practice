#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n=5;
int arr[]={1,2,3,5};
int XOR1=0,XOR2=0;
for(int i=0;i<n-1;i++){
    XOR1=XOR1^(i+1);
    XOR2=XOR2^arr[i];
}
XOR1=XOR1^n;
cout<<(XOR1^XOR2);

return 0;

}
