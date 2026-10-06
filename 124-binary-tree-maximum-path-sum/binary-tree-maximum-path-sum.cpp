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
    int diameter = INT_MIN;

    int height(TreeNode* root) {

        if(root == NULL)
            return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        diameter = max(diameter,
                       root->val + max(0, lh) + max(0, rh));

        return root->val + max(0, max(lh, rh));
    }

    int maxPathSum(TreeNode* root) {
        height(root);
        return diameter;
    }
};