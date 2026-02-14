#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    } 

    void inordertraversal(Node* root){
        if(root==NULL) return;
        inordertraversal(root->left);
        cout<<root->data;
        inordertraversal(root->right);
    }

    void preordertraveral(Node* root){
        if(root==NULL) return;

        cout<<root->data;
        inordertraversal(root->left);
        inordertraversal(root->right);
    }

    void postorderTraversal(Node* root){
        if(root==NULL) return;
        
        inordertraversal(root->left);
        inordertraversal(root->right);
        cout<<root->data;
    }
};
int main(){

    Node* root=new Node(1);

    root->left=new Node(2);
    root->right=new Node(3);

    root->left->left=new Node(4);
    root->left->right=new Node(5);   
    
    root->right->left=new Node(6);    
    root->right->right=new Node(7);     

}