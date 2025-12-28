#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node *left= NULL;
    Node *right =NULL;

    Node(int data){
        this->data=data;
        this->left-=NULL;
        this->right=NULL;
    }
};
static int idx=-1;
Node* buildTree(vector<int>preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    Node * root=new Node(preorder[idx]);
    root->left=buildTree(preorder);
    root->right=buildTree(preorder);
    return root;
}
void preorder(Node *root){
    if(root== NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root){
    if(root== NULL){
        return;
    }
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
}
void postorder(Node *root){
    if(root== NULL){
        return;
    }
    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    vector<int>buildata={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildTree(buildata);
    // cout<<root->data<<endl;
    // preorder(root);
    // inorder(root);
    postorder(root);
     return 0;
}