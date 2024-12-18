#include <iostream>
#include <queue>
using namespace std;

template <class T>
class Node{
    public:
        Node<T> *left, *right;
        T data;
        Node(){
            left=nullptr;
            right=nullptr;
        }
        Node(T data){
            this->data = data;
            left= nullptr;
            right= nullptr;
        }
};
template <class T>
class Tree{
    public:
    Node<T> *root;
    Tree(){
        root=nullptr;
    }
    void CreateTree(){
        Node<T> *p = new Node<T>, *t = new Node<T>; //To hold front nodes in queue
        queue<Node<T> *>q; //Store old nodes to add childs
        int x;
        cout << "Enter root data: " << flush;
        cin >> x;
        root=new Node<T>(x);
        q.emplace(root);

        while (! q.empty()){
            p = q.front();
            q.pop();

            cout << "Enter left child data of " << p->data << ": " << flush;
            cin >> x;
            if (x != -1){
                t = new Node<T>;
                t->data = x;
                t->left = nullptr;
                t->right = nullptr;
                p->left = t;
                q.emplace(t);
            }

            cout << "Enter right child data of " << p->data << ": " << flush;
            cin >> x;
            if (x != -1){
                t = new Node<T>;
                t->data = x;
                t->left = nullptr;
                t->right = nullptr;
                p->right = t;
                q.emplace(t);
            }
        }
    }
    ~Tree() {
        deleteTree(root);
    }
    void deleteTree(Node<T>* node) {
    if (node == nullptr) return;

    /* first delete both subtrees */
    deleteTree(node->left);
    deleteTree(node->right);

    /* then delete the node */
    delete node;
    }

    void Preorder() { Preorder(root); }
    void Inorder() { Inorder(root); }
    void Postorder() { Postorder(root); }

    void Preorder(Node<T> *p) {
        if (p){
            cout << p->data << ", " << flush;
            Preorder(p->left);
            Preorder(p->right);
        }
    }
    void Inorder(Node<T> *p) {
        if (p){
            Inorder(p->left);
            cout << p->data << ", " << flush;
            Inorder(p->right);
        }
    }
    void Postorder(Node<T> *p) {
        if (p){
            Postorder(p->left);
            Postorder(p->right);
            cout << p->data << ", " << flush;
        }
    }
    void LevelOrder(){
        queue<Node<T> *> q;
        cout << root->data << ", " << flush;
        q.emplace(root);
        while (!q.empty()){
            Node<T> *p = q.front();
            q.pop();
            if (p->left){
                cout << p->left->data << ", " << flush;
                q.emplace(p->left);
            }
            if (p->right){
                cout << p->right->data << ", " << flush;
                q.emplace(p->right);
            }
        }
    }
    void iterativePreorder() { iterativePreorder(root); }
    void iterativePreorder(Node<T>* p){
        stack<Node<T>*> stk;
        while (p != nullptr || ! stk.empty()){
            if (p != nullptr){
                cout << p->data << ", " << flush;
                stk.emplace(p);
                p = p->lchild;
            } else {
                p = stk.top();
                stk.pop();
                p = p->rchild;
            }
        }
        cout << endl;
    }
    void iterativeInorder() { iterativeInorder(root); }
    void iterativeInorder(Node<T>* p){
        stack<Node<T>*> stk;
        while (p != nullptr || ! stk.empty()){
            if (p != nullptr){
                stk.emplace(p);
                p = p->lchild;
            } else {
                p = stk.top();
                stk.pop();
                cout << p->data << ", " << flush;
                p = p->rchild;
            }
        }
        cout << endl;
    }
    void iterativePostorder() { iterativePostorder(root); }
    void iterativePostorder(Node<T>* p){
        stack<long int> stk;
        long int temp;
        while (p != nullptr || ! stk.empty()){
            if (p != nullptr){
                stk.emplace((long int)p);
                p = p->lchild;
            } else {
                temp = stk.top();
                stk.pop();
                if (temp > 0){
                    stk.emplace(-temp);
                    p = ((Node<T>*)temp)->rchild;
                } else {
                    cout << ((Node<T>*)-temp)->data << ", " << flush;
                    p = nullptr;
                }
            }
        }
        cout << endl;
    }
    Node<T>* generateFromTraversal(int inorder[], int preorder[], int inStart, int inEnd){
        static int preIndex = 0;
        if (inStart > inEnd) return nullptr;
        Node<T>* tNode = new Node<T>(preorder[preIndex++]);
        if (inStart == inEnd) return tNode;
        int inIndex = search(inorder, inStart, inEnd, tNode->data);
        tNode->left = generateFromTraversal(inorder, preorder, inStart, inIndex - 1);
        tNode->right = generateFromTraversal(inorder, preorder, inIndex + 1, inEnd);
        return tNode;
    }
    int height(Node<T>* p){
        int x = 0, y = 0;
        if (p == nullptr) return 0;
        x = height(p->left);
        y = height(p->right);
        return x > y ? x + 1 : y + 1;
    }
    int countNodes(Node<T>* p){
        if (p == nullptr) return 0;
        return countNodes(p->left) + countNodes(p->right) + 1;
    }
    int countLeafNodes(Node<T>* p){
        int x = 0, y = 0;
        if (p == nullptr) return 0;
        x = countLeafNodes(p->left);
        y = countLeafNodes(p->right);
        if (p->left == nullptr && p->right == nullptr) return x + y + 1;
        return x + y;
    }
    int countNonLeafNodes(Node<T>* p){
        int x = 0, y = 0;
        if (p == nullptr) return 0;
        x = countNonLeafNodes(p->left);
        y = countNonLeafNodes(p->right);
        if (p->left != nullptr || p->right != nullptr) return x + y + 1;
        return x + y;
    }
};

int main(){

    Tree<int> bt;

    bt.CreateTree();
    cout << endl;

    cout << "Preorder: " << flush;
    bt.Preorder();
    cout << endl;

    cout << "Inorder: " << flush;
    bt.Inorder();
    cout << endl;

    cout << "Postorder: " << flush;
    bt.Postorder();
    cout << endl;

    return 0;
}