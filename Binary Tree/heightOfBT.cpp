#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left=right=NULL;
    }
};


static int idx=-1;
Node* buildTree(vector<int> preorder){
    idx++;
    if(preorder[idx]==-1) {
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder); //Left
    root->right = buildTree(preorder); //Right

    return root;

}


//Height of tree
int height(Node* root){
    if(root == NULL) {
        return 0;
    }

    int leftHt = height(root->left);
    int rightHt = height(root->right);
    return max(leftHt,rightHt) + 1;
}

//count nodes
int count(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftCount = count(root->left);
    int rightCount = count(root->right);

    return leftCount+rightCount+1;
}

int sum(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftSum = sum(root->left);
    int rightSum = sum(root->right);

    return leftSum+rightSum+root->data;
}

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);

    cout<<"height : "<<height(root) <<endl;

    cout<<"Count : "<<count(root) <<endl;

    cout<<"Sum : "<<sum(root)<<endl;
}