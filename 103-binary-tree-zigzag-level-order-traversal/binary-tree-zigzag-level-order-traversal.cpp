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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL) return ans;

        queue<TreeNode*> qthnode;
        qthnode.push(root);
        bool leftToright = true;

        while (!qthnode.empty()) {
            int size = qthnode.size();
            vector<int> level(size);

            for (int i = 0; i < size; i++) {
                TreeNode* node = qthnode.front();
                qthnode.pop();

                if (node->left != NULL)
                    qthnode.push(node->left);

                if (node->right != NULL)
                    qthnode.push(node->right);

                int index = leftToright ? i : size - 1 - i;
                level[index] = node->val;
            }

            leftToright = !leftToright;
            ans.push_back(level);
        }

        return ans;
    }
};