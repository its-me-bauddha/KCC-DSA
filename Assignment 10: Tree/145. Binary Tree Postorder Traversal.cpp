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
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> A;
        stack <TreeNode* > S;

        if(root){
            S.push(root);
        }

        while(!S.empty()){
            TreeNode*temp= S.top();
            if(temp ->right){
                S.push(temp->right);
                temp ->right = NULL;
            }
            else{
                A.push_back(temp -> val);
                S.pop();
                if(temp ->left){
                    S.push(temp ->left);
                }
            }
        }
        return A;
    }
};
