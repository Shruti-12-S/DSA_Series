#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

int main(){
    string str = "shruti shinde.";

    // for(int i=0;i<str.length(); i++){
    //     cout<<str[i]<<" ";
    // }

    // for(char ch : str){
    //     cout<< ch <<" ";
    // }
    // cout<<endl;

    reverse(str.begin(), str.end());
    cout<<str<<endl;

    return 0;
}