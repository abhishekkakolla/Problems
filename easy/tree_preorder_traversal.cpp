#include <iostream>
/* you only have to complete the function given below.  
Node is defined as  

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    void preOrder(Node *root) {
        if (root == NULL) return;
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
        // kinda cool, its basically the pin collecting method from IB
        // put the cout statement before the recursive calls and its pre-order
        // in the middle -> in order
        // after -> post order
        // just like the order you pick up the pins
        

    }
