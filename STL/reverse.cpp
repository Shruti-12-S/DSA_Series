#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};

    reverse(vec.begin()+1,vec.begin()+3);

    for(auto val : vec){
        cout<<val<<endl;
    }


    return 0;
}