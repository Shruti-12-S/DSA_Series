#include<iostream>
using namespace std;

int main(){
    int arr[9]={1,1,2,2,3,4,4,8,8};
    int n=9;

    for(int i=1;i<n;i++){
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
            cout<<"Single Element "<<arr[i];
            break;
        }
    }
    
    return 0;
}