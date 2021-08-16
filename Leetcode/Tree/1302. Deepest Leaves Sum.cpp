// ##I have used two approached for solving this problem 
// ###1)Resursive Approach
//       Step 1-> Compute the Height of the beinary tree
//       Step 2->Recursively add values of the node of deepeest level and maintain the maximum sum
// ###2)Iteartive Approach

// Using DFS Approach I have iterate the tree

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
        
        queue<TreeNode*>qu;
        int depth=0;//we have taken count basically for computing the depth the the tree
        qu.push(root);//push 1
        //my first while is for computing the leval of the tree ofr we can say the depth of the tree
        while(!qu.empty())
        {
            int size=qu.size();
            //now getting the current node
            for(int i=0;i<size;i++)
            {
                TreeNode* currnode=qu.front();
                if(currnode->left)
                {
                    qu.push(currnode->left);//push the 2
                }

                if(currnode->right)
                {
                    qu.push(currnode->right);//push the 3
                }
               qu.pop();//pop the 1 i.e root node 
            }
             depth++;
        }
        //let say count after this is 3
        
        //my second while loop is for computing the required sum by traversing it again and reached at the end of node 
        //that's why i run my second while loop upto depth-1 level
        int start=0;
        queue<TreeNode*>qu2;
        qu2.push(root);
         while(start<depth-1)
        {
            int size=qu2.size();
            //now getting the current node
            for(int i=0;i<size;i++)
            {
                TreeNode* currnode=qu2.front();
                if(currnode->left)
                {
                    qu2.push(currnode->left);//push
                }

                if(currnode->right)
                {
                    qu2.push(currnode->right);//push 
                }
               qu2.pop();
            }
            start++;
        }
       
        
        
        //after all this in my queue last leaf node is remaining in my example it is 7 and 8
        int sum=0;
            while(!qu2.empty())
            {
                TreeNode* newnode=qu2.front(); 
                sum+=newnode->val;  //7+8=15
                qu2.pop();//7//8
            }
        return sum;//conatining the final result which is asked
    }
};
