#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int d) {data = d;}
        ~Node(){delete this;}
};
void levelOrderTraverse(Node* root);
Node* insertNode(int data);
void inOrder(Node* root){
    if(root==NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void preOrder(Node* root){
    if(root==NULL)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(Node* root){
    if(root==NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
int main(){
    Node *root = insertNode(7);
    root->left = insertNode(3);
    root->right = insertNode(10);
    root->left->left = insertNode(1);
    root->left->right = insertNode(6);
    root->left->right->left = insertNode(4);
    root->left->right->right = insertNode(7);
    root->right->right = insertNode(14);
    root->right->right->left = insertNode(13);

    cout << "InOrder: " ;
    inOrder(root);
    cout << endl << "PreOrder: ";
    preOrder(root);
    cout << endl << "PostOrder: ";
    postOrder(root);
    cout << endl;
}


void levelOrderTraverse(Node* root){
    if(root == NULL)
        return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        cout << (q.front())->data << " ";
        if((q.front())->left!=NULL)
            q.push((q.front())->left);
        if((q.front())->right!=NULL)
            q.push((q.front())->right);
        q.pop();
    }
}

Node* insertNode(int data){
    Node* n = new Node(data);
    n->left = NULL;
    n->right = NULL;
    return n;
}