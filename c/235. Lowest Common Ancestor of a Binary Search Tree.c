/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode *LCA(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if (!root) return root;
    if (root->val < p->val)     return LCA(root->right, p , q);
    if (root->val > q->val)     return LCA(root->left, p, q);
    return root;
}


struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if (p->val < q->val)    return LCA(root, p, q);
    else    return LCA(root, q, p);
}