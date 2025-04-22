// PreOrder Traversal : in this we first print ROOT then, Left then, Right

// Input : 
//              1
//             / \
//            2   3
//               / \
//              4   5

// Output : 1, 2, 3, 4, 5


#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <iomanip>
using namespace std;

// Node template
class Node{   
 public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = NULL;
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

int getHeight(Node* root) {
    if (!root) return 0;
    return 1 + max(getHeight(root->left), getHeight(root->right));
}

void printSpaces(int count) {
    for (int i = 0; i < count; ++i)
        cout << ' ';
}

void printTree(Node* root) {
    if (!root) return;

    int height = getHeight(root);
    int nodesInLevel = 1;
    queue<Node*> q;
    q.push(root);

    for (int level = 1; level <= height; ++level) {
        vector<Node*> currentLevelNodes;
        for (int i = 0; i < nodesInLevel; ++i) {
            Node* node = q.front(); q.pop();
            currentLevelNodes.push_back(node);
            if (node) {
                q.push(node->left);
                q.push(node->right);
            } else {
                q.push(nullptr);
                q.push(nullptr);
            }
        }

        int floor = height - level;
        int edgeLines = (int)pow(2, (max(floor - 1, 0)));
        int firstSpaces = (int)pow(2, floor) - 1;
        int betweenSpaces = (int)pow(2, floor + 1) - 1;

        // Print node values
        printSpaces(firstSpaces);
        for (int i = 0; i < currentLevelNodes.size(); ++i) {
            if (currentLevelNodes[i])
                cout << setw(2) << currentLevelNodes[i]->data;
            else
                cout << "  ";

            if (i != currentLevelNodes.size() - 1)
                printSpaces(betweenSpaces);
        }
        cout << "\n";

        // Print branches lines
        if (level == height) break; // last level, no branches

        for (int line = 1; line <= edgeLines; ++line) {
            for (int i = 0; i < currentLevelNodes.size(); ++i) {
                printSpaces(firstSpaces - line);
                if (currentLevelNodes[i] == nullptr) {
                    // print spaces for null node
                    printSpaces(edgeLines * 2 + line + 1);
                    continue;
                }

                // print left branch
                if (currentLevelNodes[i]->left)
                    cout << "/";
                else
                    cout << " ";

                // print spaces between branches
                printSpaces(line * 2 - 1);

                // print right branch
                if (currentLevelNodes[i]->right)
                    cout << "\\";
                else
                    cout << " ";

                printSpaces(edgeLines * 2 - line);
            }
            cout << "\n";
        }

        nodesInLevel *= 2;
    }
}



int main(){
    int PreOrder_Sequence[]= {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = createTree(PreOrder_Sequence); // create the tree and returns the address of root 
    preOrderTraversal(root); 
    printTree(root);
    
    return 0;
}

