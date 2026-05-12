#include<iostream>
using namespace std;

int main(){
    int arr[6]={0,3,8,9,5,2};
    int n=6;

    int st=1;
    int end=n-2;
    int mid;

    while (st<=end)
    {
        mid=st+(end-st)/2;

        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            cout<<"Peak element is: "<<arr[mid]<< " is at index "<<mid<<endl;
            break;
        }

        if(arr[mid-1]<arr[mid]){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    
    return 0;
}