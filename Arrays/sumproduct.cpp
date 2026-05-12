#include<iostream>
using namespace std;

void calcSumProduct(int arr[], int size){
    int sum=0;
    int product=1;

    for(int i=0;i<size;i++){
        sum+=arr[i];
        product*=arr[i];
    }

    cout<<"Sum ="<<sum<<endl;
    cout<<"Product ="<<product<<endl;
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;

    calcSumProduct(arr,size);
    return 0;
}