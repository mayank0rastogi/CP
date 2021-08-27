// Given the root of a binary tree, return the preorder traversal of its nodes' values.

 

// Example 1:


// Input: root = [1,null,2,3]
// Output: [1,2,3]
// Example 2:

// Input: root = []
// Output: []
// Example 3:

// Input: root = [1]
// Output: [1]
// Example 4:


// Input: root = [1,2]
// Output: [1,2]
// Example 5:


// Input: root = [1,null,2]
// Output: [1,2]
 

// Constraints:

// The number of nodes in the tree is in the range [0, 100].
// -100 <= Node.val <= 100


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
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int>preorder;
        
        if(root==NULL)
        {
            return preorder;
        }
        
        stack<TreeNode*>st;
        
        st.push(root);
        
        while(!st.empty())
        {
            root=st.top();
            st.pop();
            
            preorder.push_back(root->val);
            
            if(root->right!=NULL)
            {
                st.push(root->right);
            }
            
            if(root->left!=NULL)
            {
                st.push(root->left);
            }
        }
        return preorder;
    }
};
