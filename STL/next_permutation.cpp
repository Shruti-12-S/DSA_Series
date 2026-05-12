#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string s = "bca";
    // next_permutation(s.begin(), s.end());
        prev_permutation(s.begin(), s.end());

    cout<<s<<" ";

    cout<<max(4,5)<<" "<<min(6,10)<<endl;

    int a=5;
    int b=10;

    swap(a,b);

    cout<<"a = "<<a <<" "<<"b = "<<b<<endl;

    vector<int> vec = {1,2,3,4,5};
    int target = 10;
    cout<<binary_search(vec.begin(), vec.end(), target)<<endl;


    return 0;
}