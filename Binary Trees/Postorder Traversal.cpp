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

    void postOrder(TreeNode* root, vector<int>&result){
        if(root == nullptr){
            return;
        }
        postOrder(root->left, result);
        postOrder(root->right, result);
        result.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {

        vector<int> result;
        postOrder(root, result);
        return result;

        // vector<int> result;

        // if(root == nullptr){
        //     return result;
        // }

        // vector<int> left = postorderTraversal(root->left);
        // result.insert(result.end(), left.begin(), left.end());

        // vector<int> right = postorderTraversal(root->right);
        // result.insert(result.end(), right.begin(), right.end());

        // result.push_back(root->val);

        // return result;
    }
};
