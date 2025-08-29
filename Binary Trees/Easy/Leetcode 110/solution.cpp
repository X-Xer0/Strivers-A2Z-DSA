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
    bool isBalanced(TreeNode* root) {
        return dfsHeight(root) != -1;
    }
    int dfsHeight(TreeNode* root){
        if(root == nullptr) return 0;
        
        int lH = dfsHeight(root->left);
        if(lH == -1) return -1;
        int rH = dfsHeight(root->right);
        if(rH == -1) return -1;

        if(abs(lH-rH) > 1) return -1;
        return max(lH, rH) + 1;
    }
};
