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

    int getlength( TreeNode* top, int& val){
        if (top == nullptr){
            return 0;
        }
        int lf = getlength( top->left, val);
        
        int lr = getlength(top ->right, val);
        val = max(val, lr + lf);
     return max(lr, lf) +1 ;

    }
    int diameterOfBinaryTree(TreeNode* root) {
        int count = 0;
        getlength(root, count);
        return count;
        }
};
