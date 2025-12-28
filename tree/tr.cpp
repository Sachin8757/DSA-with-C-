#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int valu){
        data=valu;
        left=right=NULL;
    }
};
static int ind=-1;
Node* buildtree(vector<int>preorder){
    ind++;
    if(preorder[ind]==-1){
        return NULL;
    }
    Node* root=new Node(preorder[ind]);
    root->left=buildtree(preorder);
    root->right=buildtree(preorder);
    return root;
}
void pretrevelsal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    pretrevelsal(root->left);
    pretrevelsal(root->right);
}

int main(){
    vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1,};
    Node* root=buildtree(preorder);
    // cout<<root->data<<endl;
    pretrevelsal(root);
    return 0;
}