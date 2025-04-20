// PreOrder Traversal : in this we first print ROOT then, Left then, Right

// Input : 
//              1
//             / \
//            2   3
//               / \
//              4   5

// Output : 1, 2, 3, 4, 5

#include <iostream>
using namespace std;

// Node template
class Node{   
 public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
    }
};

// Create tree function with recursion
static int index = -1;
Node* createTree(int preOrder[]){
    index++;

    if (preOrder[index] == -1) return NULL; // (node : -1) means (node : NULL)

    Node* root = new Node(preOrder[index]); 
    root->left = createTree(preOrder);
    root->right = createTree(preOrder);

    return root;
}

// PreOder Traversal
void preOrderTraversal(Node* root){
    
    if(root == NULL) return; // to stop the recursion as we hit NULL value in end of tree  

    cout << root->data << " "; // First : Root
    preOrderTraversal(root->left); // Second : left
    preOrderTraversal(root->right); // Third : right
}


int main(){
    int PreOrder_Sequence[]= {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = createTree(PreOrder_Sequence); // create the tree and returns the address of root 
    preOrderTraversal(root); 
    
    return 0;
}
