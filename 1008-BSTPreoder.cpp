/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder)  {
        TreeNode* root = nullptr;
        for(int i = 0; i < preorder.size(); i++) {
            root = insert(root, preorder[i]);
        }
        return root;
    }

    TreeNode* insert(TreeNode* root, int d) {
        // Create a new node if the root is null
        if(root == nullptr) {
            return new TreeNode(d);
        }
        // Recursively insert into the left or right subtree
        if(d < root->val) {
            root->left = insert(root->left, d);
        } else {
            root->right = insert(root->right, d);
        }
        return root;
    }
};
