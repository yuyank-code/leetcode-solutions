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
// class Solution {
// public:
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         if (root == NULL) return ans;

//         queue<TreeNode*> qthnode;
//         qthnode.push(root);
//         bool leftToright = true;

//         while (!qthnode.empty()) {
//             int size = qthnode.size();
//             vector<int> level(size);

//             for (int i = 0; i < size; i++) {
//                 TreeNode* node = qthnode.front();
//                 qthnode.pop();

//                 if (node->left != NULL)
//                     qthnode.push(node->left);

//                 if (node->right != NULL)
//                     qthnode.push(node->right);

//                 int index = leftToright ? i : size - 1 - i;
//                 level[index] = node->val;
//             }

//             leftToright = !leftToright;
//             ans.push_back(level);
//         }

//         return ans;
//     }
// };

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (!root) return res;

        deque<TreeNode*> dq;
        dq.push_back(root);
        bool reverse = false;

        while (!dq.empty()) {
            int size = dq.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {
                if (!reverse) {
                    TreeNode* node = dq.front(); dq.pop_front();
                    level.push_back(node->val);
                    if (node->left) dq.push_back(node->left);
                    if (node->right) dq.push_back(node->right);
                } else {
                    TreeNode* node = dq.back(); dq.pop_back();
                    level.push_back(node->val);
                    if (node->right) dq.push_front(node->right);
                    if (node->left) dq.push_front(node->left);
                }
            }

            res.push_back(level);
            reverse = !reverse;
        }

        return res;
    }
};