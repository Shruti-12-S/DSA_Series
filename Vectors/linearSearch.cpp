#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1,2,3,4,5};
    int target=4;

    for(int val: vec){
        if(val==target){
            cout<<val<<" target is found"<<endl;
            break;
        }
    }
    

    return 0;
}