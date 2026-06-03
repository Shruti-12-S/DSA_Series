#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class Info{
public: 
    int min,max,size;

    Info(int min,int max,int size){
        this->min = min;
        this->max = max;
        this->size = size;
    }
};

Info helper(Node* root){
    if(root==NULL){
        return Info(INT_MAX,INT_MIN,0);
    }

    Info left = helper(root->left);
    Info right = helper(root->right);

    if(root->data > left.max && root->data < right.min){
       int currMin = min(root->data, left.min);
       int currMax = max(root->data, right.max);
       int currSz = left.size + right.size + 1;

       return Info(currMin,currMax,currSz);
    }

    return Info(INT_MIN,INT_MAX,max(left.size,right.size));
}

int largestBSTinBT(Node* root){
    Info info = helper(root);
    return info.size; //max BST size

}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(1);
    root->left->right = new Node(8);
    root->right->right = new Node(7);

    cout << "Size of the largest BST in the given binary tree: " << largestBSTinBT(root) << endl;

    return 0;
}
