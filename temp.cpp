#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int v): data(v), left(nullptr), right(nullptr) {}
};

int main() {
    // — build your tree however you like —
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left   = new Node(3);
    root->left->right  = new Node(7);
    root->right->left  = new Node(12);
    root->right->right = new Node(18);
    root->left->left->left  = new Node(1);
    root->left->left->right = new Node(4);
    root->left->right->right= new Node(9);

    // **ONLY** this prints the diagram—no extra output
    printTree(root);
    return 0;
}
