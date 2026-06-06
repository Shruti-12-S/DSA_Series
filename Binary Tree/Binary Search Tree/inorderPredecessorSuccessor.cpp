


//Find predeccessor and successor in a BST

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val): data(val), left(nullptr), right(nullptr) {}
};

//Find predecessor and successor in a BST

Node* rightMostInLeftSubtree(Node* root){
    Node* ans = nullptr;
    while(root!=NULL){
        ans = root;
        root = root->right;
    }
    return ans;
}

Node* leftMostInRightSubtree(Node* root){
    Node* ans = nullptr;
    while(root!=NULL){
        ans = root;
        root = root->left;
    }
    return ans;
}

vector<int> getPredSucc(Node* root, int key){
    // returns {predecessor, successor}. -1 if not present.
    Node* curr = root;
    Node* pred = nullptr;
    Node* succ = nullptr;

    while(curr!=NULL){
        if(key < curr->data){
            succ = curr;
            curr = curr->left;
        }else if(key > curr->data){
            pred = curr;
            curr = curr->right;
        }else{
            // key == curr->data
            if(curr->left != NULL){
                pred = rightMostInLeftSubtree(curr->left);
            }
            if(curr->right != NULL){
                succ = leftMostInRightSubtree(curr->right);
            }
            break;
        }
    }

    int predVal = pred ? pred->data : -1;
    int succVal = succ ? succ->data : -1;
    return {predVal, succVal};
}

int main(){
    Node* root = new Node(6);
    root->left = new Node(4);
    root->right = new Node(8);
    root->left->left = new Node(1);
    root->left->right = new Node(5);
    root->right->left = new Node(7);
    root->right->right = new Node(9);

    int key = 7;
    vector<int> ans = getPredSucc(root,key);
    cout<<"Predecessor: "<<ans[0]<<endl;
    cout<<"Successor: "<<ans[1]<<endl;

    return 0;
}