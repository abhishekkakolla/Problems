/*
Notes: 
- thought about this like post-order traversal, check left node and right node and see which
is the higher of the two at that level, that's the maximum height. then send this up the
tree to find the actual max height
- don't know if it is possible (or how) to implement without a helper function with height or global variable
( prob not)

*/


/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int recurse_height(Node* root, int height)
    {
        if (root == NULL) return height;
        int max_left = recurse_height(root->left, height+1);
        int max_right = recurse_height(root->right, height+1);
        int max = max_left >= max_right ? max_left : max_right;
        return max;
    }

    int height(Node* root) {
        // Write your code here.
        return recurse_height(root, 0) - 1;
    }