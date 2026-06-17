#include<iostream>
#include<vector>
using namespace std;
int main(){
    const int n=4;
    const int m=4;
int mat[m][n]={7,4,6,1,5,3,2,1,0,4,3,2,1,0,1,2};
vector<int> vrr;
int left=0,right=n-1,top=0,bottom=m-1;
while(left<=right && top<=bottom){
for(int i=left;i<=right;i++){
    vrr.push_back(mat[top][i]);
}
for(int i=top+1;i<=bottom;i++){
    vrr.push_back(mat[i][right]);

}
for(int i=right-1;i>=left;i--){
    vrr.push_back(mat[bottom][i]);
}
for(int i=bottom-1;i>top;i--){
    vrr.push_back(mat[i][left]);
}

left++;
right--;
top++;
bottom--;
}

for(int i=0;i<vrr.size();i++){
    cout<<vrr[i]<<" ";
}


    return 0;
}
