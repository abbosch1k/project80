#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left = nullptr;
    Node* right = nullptr;
};

Node* insert(Node* root, int val) {
    if(!root) return new Node{val};
    if(val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

void inorder(Node* root) {
    if(root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = nullptr;
    root = insert(root, 50); insert(root, 30); insert(root, 70);
    cout << "Inorder: "; inorder(root); cout << endl;
    return 0;
}
