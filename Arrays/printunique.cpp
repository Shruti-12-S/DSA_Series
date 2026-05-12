#include<iostream>
using namespace std;

void printUnique(int arr[], int size){
    bool isUnique;

    for(int i=0;i<size;i++){
        isUnique=true;
        for(int j=0;j<size;j++){
            if(i!=j && arr[i]==arr[j]){
                isUnique=false;
                break;
            }
        }
        if(isUnique)
        {cout<<arr[i]<<" is unique value";}
    }

    

}

int main(){
    int arr[]={1,2,3,4,1,2,3};
    int size=7;
    printUnique(arr,size);

    return 0;
}