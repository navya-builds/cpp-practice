#include<iostream>
#include<vector>
using namespace std;
vector<int> sorted_arrays(vector<int>&a,vector<int> &b){
    int n1=a.size();
    int n2=b.size();
vector<int> unionArr;
int i=0;
int j=0;
while(i<n1 && j<n2){
if(a[i]<b[i]){
   if(unionArr.size()==0|| a[i]!=unionArr.back() ){
    unionArr.push_back(a[i]);
   }
   i++;
}
   else {

if(unionArr.size()==0 || b[i]!=unionArr.back()){
    unionArr.push_back(b[i]);
   }
j++;
   }
}
while(i<n1){

if(unionArr.size()==0 || a[i]!=unionArr.back()){
    unionArr.push_back(a[i]);
   }
i++;
}

while(j<n2){
if(unionArr.size()==0|| b[i]!=unionArr.back() ){
    unionArr.push_back(b[i]);
   }
j++;

}


for(auto it:unionArr){
    cout<<it<<" ";
}
return unionArr;
}

int main(){

vector<int> a={1,2,3,3,3,4,5,6,6,7,7};
vector<int> b={1,2,8};

vector<int> result = sorted_arrays(a,b);

    return  0;
}







