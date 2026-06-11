#include<iostream>
#include<map>
using namespace std;
int main(){
int n;
cout<<"enter size of array";
cin>>n;
int arr[n];
cout<<"enter values of array";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
map <int,int> mpp;
for(int i=0;i<n;i++){ 
  mpp[arr[i]]++;
}
int q;
cout<<"enter no of queries";
cin>>q;
while(q--){
    int number;
cout<<"enter number";
cin>>number;
cout<<mpp[number]<<endl;

}

    return 0;
}
