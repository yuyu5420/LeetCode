/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

#define max(a, b) ((a>b)?a:b)

int maxDepth(struct TreeNode* root){
    if (!root) return 0;
    int l_num = maxDepth(root->left), r_num = maxDepth(root->right);
    return 1 + max(l_num, r_num);
}