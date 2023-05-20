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
int main(){
    Node *root = insertNode(14);
    root->left = insertNode(4);
    root->right = insertNode(15);
    root->left->left = insertNode(3);
    root->left->right = insertNode(9);
    root->left->right->left = insertNode(7);
    root->left->right->left->left = insertNode(5);
    root->right->right = insertNode(18);
    root->right->right->left = insertNode(16);
    root->right->right->right = insertNode(20);
    root->right->right->left->right = insertNode(17);

    levelOrderTraverse(root);
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