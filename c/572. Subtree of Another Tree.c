/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isSame(struct TreeNode* root, struct TreeNode* subRoot){
    if (!root && !subRoot)  return true;
    if (!root || !subRoot)  return false;
    if (root->val == subRoot->val)  return isSame(root->left, subRoot->left) && isSame(root->right, subRoot->right);
    return false;
}

bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot){
    if (!root)   return  false;
    if (root->val == subRoot->val && isSame(root, subRoot)){
        return true;
    }
    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}

