#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int d) {data = d; left=NULL; right=NULL;}
        ~Node(){delete this;}
};
void createNode(int data, Node* root){
    Node* p = root;
    while (p!=NULL)
    {
        if(data < p->data){
            if(p->left == NULL){
                p->left = new Node(data);
                return;
            }
            p = p->left;
        }
        else if(data >= p->data){
            if(p->right == NULL){
                p->right = new Node(data);
                return;
            }
            p = p->right;
        }
    }
}
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
    int d; cin>>d;
    Node* root = new Node(d);
    cin>>d;
    do{
        createNode(d, root);
        cin>>d;
    }while(d != -1);
    cout << "InOrder: " ;
    inOrder(root);
    cout << endl << "PreOrder: ";
    preOrder(root);
    cout << endl << "PostOrder: ";
    postOrder(root);
    cout << endl;
}