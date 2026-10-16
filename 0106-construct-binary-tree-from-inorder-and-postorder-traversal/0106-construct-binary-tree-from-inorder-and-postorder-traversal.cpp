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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()!=postorder.size()) return NULL;
        map<int,int>hm;
        for(int i=0;i<inorder.size();++i) hm[inorder[i]]=i;
        return buildTreePostIn(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,hm);
    }
    TreeNode* buildTreePostIn(vector<int>&inorder,int is,int ie,vector<int>&postorder,int ps,int pe,map<int,int>&hm){
        if(ps>pe||is>ie)return NULL;
        TreeNode*root=new TreeNode(postorder[pe]);
        int inroot=hm[postorder[pe]];
        int numsleft=inroot-is;
        root->left=buildTreePostIn(inorder,is,inroot-1,postorder,ps,ps+numsleft-1,hm);
        // so yaha aisa hai ki ye pahle inorder me pahle root ke baad inorder me left lega uske liye ye is inorder ke start se leke jo current element hamar root hai uske just ek element pahle tak chalega ab hame us bache hue element ka jo is se chala root ke pahle tak hama uska posrder nikalna hai jo ki hamar postorder ke start se chalega aur ps +jo root hai us element tak ke end se joki nums left that yanicurrent root ko hata kar start se jo aayega usse 
         root->right=buildTreePostIn(inorder,inroot+1,ie,postorder,ps+numsleft,pe-1,hm);
         return root;
    }
};