#include<iostream>
using namespace std;

void printIntersection(int arr1[], int size1, int arr2[], int size2){
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                break; // Move to next element in arr1 to avoid multiple prints
            }
        }
    }
}

int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int size1 = 5;
    int size2 = 5;

    cout << "Intersection of arrays: ";
    printIntersection(arr1, size1, arr2, size2);

    return 0;
}
