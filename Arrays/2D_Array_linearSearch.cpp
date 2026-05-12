#include<iostream>
using namespace std;

pair<int,int> linearSearch(int mat[][3], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            if(mat[i][j] == key){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int main(){
    int mat[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int rows = 3;
    int cols = 3;
    int key = 8;

    pair<int, int> result =  linearSearch(mat, 3,3,8);

    if(result.first != -1){
        cout<<"Found at position: ("<<result.first<<", "<<result.second<< ")\n";
    }else{
        cout<<"Key not found\n";
    }

    return 0;
}