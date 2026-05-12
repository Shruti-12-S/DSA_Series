#include<iostream>
#include <climits>

using namespace std;

int main(){
    int nums[]={5,15,22,1,15,24};
    int size=6;

    int smallest=INT_MAX;
    int largest=INT_MIN;

    int index_small;
    int index_large;

    for(int i=0;i<size;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
            index_small=i;
        }  
    }

    for(int i=0;i<size;i++){
        if(nums[i]>largest){
            largest=nums[i];
            index_large=i;
        }  
    }

        
    cout<<"smallest="<<smallest<<endl;
    cout<<"index of smallest=" <<index_small<<endl;
    cout<<"Largest="<<largest<<endl;
    cout<<"index of largest=" <<index_large<<endl;
    return 0;
}