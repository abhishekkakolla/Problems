/*
Post order traversal
Mirror at each level (aka swap left and right)
*/

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        if (root == nullptr)
            return nullptr;
        // traverse in post order
        TreeNode *left = invertTree(root->left);
        TreeNode *right = invertTree(root->right);

        // mirror
        root->left = right;
        root->right = left;

        return root;
    }
};
