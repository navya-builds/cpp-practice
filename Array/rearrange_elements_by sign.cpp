#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> vrr={1,-2,3,4,-6,-4};
int posindex=0;
int negindex=1;
vector<int> result(vrr.size());
for(int i=0;i<vrr.size();i++){
    if(vrr[i]>0){
    result[posindex]=vrr[i];
    posindex=posindex+2;
    }
    else{
        result[negindex]=vrr[i];
        negindex=negindex+2;
    }
}
for(auto it:result){
    cout<<it<<" ";
}
    return 0;
}
