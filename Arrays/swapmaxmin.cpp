#include<iostream>
#include<climits>
using namespace std;

void swapmaxmin(int arr[] ,int size){
    int large=INT_MIN;
    int small=INT_MAX;

    int largeIndex = 0, smallIndex = 0;

    for(int i=0;i<size;i++){
        if(arr[i] > large) {
            large = arr[i];
            largeIndex = i;
        }
        if(arr[i] < small) {
            small = arr[i];
            smallIndex = i;
        }
    }

    cout<<"Largest= "<<large<<endl;
    cout<<"Smallest= "<<small<<endl;

     swap(arr[largeIndex], arr[smallIndex]);
    

}

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;

    swapmaxmin(arr,size);

    cout<<"After swaping array becomes: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}