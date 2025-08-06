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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr || q == nullptr){
            return p == q;
        }
        return (p->val == q->val)
        && isSameTree(p->left, q->left)
        && isSameTree(p->right, q->right);
    }
};

// We are doing pre-order traversal in this but any traversal will work. We first compare the root then recurse left until null then check the right.
// For Post order traversal:

        // return isSameTree(p->left, q->left)
        // && isSameTree(p->right, q->right)
        // && (p->val == q->val);
