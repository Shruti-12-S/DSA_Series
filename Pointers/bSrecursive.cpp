#include<iostream> 
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int tar, int st,int end){
    if(st<=end){
        int mid=st+(end-st)/2;

        if(tar<arr[mid]){
            return binarySearch(arr,tar,st,mid-1);
        }
        else if(tar>arr[mid]){
            return binarySearch(arr,tar,mid+1,end);
        }
        else{
            return mid;
        }


    }
    return -1;
}

int main(){
    vector<int> arr={-1,0,4,7,9,12};
    int tar=9;

    cout<<binarySearch(arr,tar,0,arr.size()-1);
    

    return 0;
}