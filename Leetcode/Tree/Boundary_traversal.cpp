class Solution
{
  bool isLeaf(TreeNode* root)
  {
    return !root->left && !root->right;
  }
  
  void addLeftBoundary(TreeNode* root,vector<int>&res)
  {
    TreeNode* curr=root->left;
    while(curr)
    {
      if(!isLeaf(curr))
      {
        res.push_back(curr->val);
      }
      if(curr->left)
      {
        
        curr=curr->left;
      }
      else
      {
        curr=curr->right;
      }
    }
    
    void addRightBoundary(TreeNode* root,vector<int>&res)
    {
      TreeNode* curr=root->right;
      vector<int>temp;
      
      while(curr)
      {
        if(!isLeaf(curr))
        {
          temp.push_back(curr->val);
        }
        if(curr->right)
        {
          curr=curr->right;
        }
        else
        {
          curr=curr->left;
        }
        for(int i=temp.size()-1;i>=0;i--)
        {
          res.push_back(temp[i]);
        }
      }
      
      void addLeaves(TreeNode* root , vector<int>&res)
      {
        
        //basically apply inorder traversal for bringing all the leaf nodes into resulatant vector
        if(isLeaf(root))
        {
          res.push_back(root->val);
          return;
        }
        
        if(root->left)
        {
          addLeaves(root->left,res);
        }
        if(root->right)
        {
          addLeaves(root->right,res);
        }
      }
      
      public:
      vector<int>BoundaryTraversal(TreeNode* root)
      {
        vector<int>res;
        
        if(root!=NULL)
        {
          return res;
        }
        if(!isLeaf(root))
        {
          res.push_back(root->data);
        }
        
        //add left boundary
        addLeftBoundary(root,res);
        
        //add leves Node
        addLeaves(root,res);
        
        //add right boundary
        
        addRightBoundary(root,res);
      return res;  
      }
    };
        
        
