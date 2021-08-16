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
    int deepestLeavesSum(TreeNode* root) {
        int levelsum=0;
      //Using BFS Approach
    if(root==NULL)
    {
        return 0;
    }
        if(root->left==NULL && root->right==NULL)
        {
            return root->val;
        }
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            //reset sum to 0 to every level so that we can only take the deepest level sum
            levelsum=0; //sum computing at every level
            int size=q.size();
            while(size--)
            {
              TreeNode* temp=q.front();
                q.pop();
                levelsum+=temp->val;
                
                if(temp->left!=NULL)
                {
                    q.push(temp->left);
                }
                
                if(temp->right!=NULL)
                {
                    q.push(temp->right);
                }
                
                
            }
            
        }
        
        return levelsum;
    }
};

//Another Approach using BFS level order traversal

class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        
      //Using BFS Approach
    if(root==NULL)
    {
        return 0;
    }
        if(root->left==NULL && root->right==NULL)
        {
            return root->val;
        }
        
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        int sum=0,res=0;
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            if(temp!=NULL)
            {
                sum+=temp->val;
                
                if(temp->left!=NULL)
                {
                    q.push(temp->left);
                }
                
                 if(temp->right!=NULL)
                {
                    q.push(temp->right);
                }
                
            }
            else
            {
                res=sum;
                sum=0;
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
        }
        return res;
    }
};
