#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>v={1,3,3,4,3,3,5,3};
int count=0; 
int candidate=0; 
for(int i:v){
if(count==0){
    candidate=i;
    count=1;
}
else if(i==candidate){
    count++;
}
else{
    count--;
}

}
cout<<candidate;
    return 0;
}
