// class Solution {
// public:

//     int height(TreeNode* root) {
//         if(root == NULL)
//             return 0;

//         int lh = height(root->left);
//         int rh = height(root->right);

//         return 1 + max(lh, rh);
//     }

//     int diameter = 0;

//     int diameterOfBinaryTree(TreeNode* root) {

//         if(root == NULL)
//             return 0;

//         int lh = height(root->left);
//         int rh = height(root->right);

//         diameter = max(diameter, lh + rh);

//         diameterOfBinaryTree(root->left);
//         diameterOfBinaryTree(root->right);

//         return diameter;
//     }
// };
class Solution {
public:

    int diameter = 0;

    int height(TreeNode* root) {

        if(root == NULL)
            return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        diameter = max(diameter, lh + rh);

        return 1 + max(lh, rh);
    }

    int diameterOfBinaryTree(TreeNode* root) {

        height(root);

        return diameter;
    }
};