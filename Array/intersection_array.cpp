#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> a={1,3,4,5,5,5,6,6,7};
vector<int> b={1,4,5,5,6};
int n1=a.size();
int n2=b.size();
vector<int>intersectionArr;
int i=0;
int j=0;
while(i<n1 && j<n2){
 
if(a[i]<b[j]){
    i++;
}
else if(b[j]<a[i]){
    j++;
}
else{
 intersectionArr.push_back(a[i]);
 i++;
 j++;
}

}
for(auto it:intersectionArr){
    cout<<it<<" ";
}

return 0;

}
