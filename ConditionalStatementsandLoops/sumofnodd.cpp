#include<iostream>
using namespace std;

int main(){
    int n=10;
    int oddSum=0;
    int i=1;

    while(i<=n){
        if(i%2!=0){
            oddSum+=i;
        }
        i++;
    }
    cout<<"OddSum ="<<oddSum<<endl;
    return 0;
}