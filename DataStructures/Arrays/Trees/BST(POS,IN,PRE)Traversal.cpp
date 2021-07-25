>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

#include <iostream>
#include <bits/stdc++.h>
#define SPACE 5
using namespace std;


class TreeNode
{
    public:
    int value; //also termed as data or key
    //both pointer initialization means the same
    TreeNode *left;
    TreeNode* right;
    
    //default constructor
    TreeNode()
    {
        value=0;
        left=NULL;
        right=NULL;
    }
    //parametrized constructor
    TreeNode(int v)
    {
        value=v;
        left=NULL;
        right=NULL;
        
    }
};


class BST
{
    public:
    TreeNode* root;
    
    BST()
    {
        root=NULL;
    }
    
    bool is_empty()
    {
        if(root==NULL)//root pointer is pointiing tp some adress then it means it is not empty thats why it is returning true
        return true;
        else
        return false;
    }
    
    
    void InsertNode(TreeNode *newnode)
    {
      if(root==NULL)
      {
          root=newnode;
          cout<<"Value Inserted As Root Node."<<endl;
      }
      else
      {
      
           TreeNode *temp=root;//temp is basically containg the adress of root so temp is now pointing 
          //to  root node having value something, this is for traversing so that root 
          //value is not change and temp value is keep on changing
          while(temp!=NULL)//use this condition to say that we have now reach the and of the tree
          {
              if(newnode->value==temp->value)
              {
                  cout<<"Value Already Inserted ,"
                  "Duplicate value is not allowed please ,"
                  "Insert New value"<<endl;
                  return;
              }
              else if((newnode->value<temp->value)&&(temp->left==NULL))
              {
                  temp->left=newnode;//value inserted in left node 
                  cout<<"value Inserted Sucessfully To The left"<<endl;
                  break;//now get out of the function
              }
              
              else if(newnode->value<temp->value)
              {
                  temp=temp->left;//traverse to the left most child now
              }
              
              else if((newnode->value>temp->value)&&(temp->right==NULL))
              {
                  temp->right=newnode;//value inserted in right node 
                  cout<<"value Inserted Sucessfully To The right"<<endl;
                  break;//now get out of the function
              }
              
              else 
              {
                  temp=temp->right;
              }
          }
              
      }
      
      
    }
    
    void print2D(TreeNode *r,int space)
    {
        if(r==NULL)
        {
            return;//base case
        }
        
        space+=SPACE;//increaasing distance between levels
        print2D(r->right,space);//process right child first
        cout<<endl;
        for(int i= SPACE;i<space;i++)
            cout<<" ";
            cout<<r->value<<"\n";
        print2D(r->left,space);//process left child
    }
    
    void printpreorder(TreeNode *r)
    {
        if(r==NULL)
        {
            return;
        }
        cout<<r->value<<"\t";
        
        printpreorder(r->left);
        printpreorder(r->right);
    }
    
    void printInorder(TreeNode *r)
    {
        if(r==NULL)
        {
            return;
        }
        printInorder(r->left);
        cout<<r->value<<"\t";
        printInorder(r->right);
    }
    
    
    void printPostorder(TreeNode *r)
    {
        if(r==NULL)
        {
            return;
        }
        printPostorder(r->left);
       
        printPostorder(r->right);
        
         cout<<r->value<<"\t";
    }
    
    TreeNode* iterativesearch(int val)
    {
        if(root==NULL)
        {
            return root;
        }
        else
        {
          TreeNode  *temp=root;
          
          while(temp!=NULL)
          {
              if(val==temp->value)
              {
              return temp;
              }
              else if(val<temp->value)
              {
                  temp=temp->left;
              }
              else
              {
                  temp=temp->right;
              }
          }
           
           return NULL; 
        }
        
    }
    
    TreeNode* recuriveSearch(TreeNode* r,int val)
    {
        if(r==NULL && r->value==val)
        {
            return r;
        }
        else if(val<r->value)
        {
            recuriveSearch(r->left,val);
        }
        else
        {
            recuriveSearch(r->right,val);
        }
    }
    
    int height(TreeNode* r)
    {
        if(r==NULL)
        {
            return -1;
        }
        else
        {
          //compute the height of each subtree in complete-bst
          int lheight=height(r->left);
          int rheight=height(r->right);
        
        //use the larger one for telling complete height
        
            if(lheight>rheight)
            {
                return (lheight+1);
            }
            else
            {
                return (rheight+1);
            }
        }
        
    }
    
    
    
    
    
    
    
    
    
};
int main()
{
    BST bst;
    
    int option,val;
    
    do
    {
      cout<<"Enter the operation you want to perform!"<<"Enter the 0 to exit from the this:"<<endl;    
      cout<<"1. Insert Node:"<<endl;
      cout<<"2. Search Node:"<<endl;
      cout<<"3. Delete Node:"<<endl;
      cout<<"4. Print BST values"<<endl;
      cout<<"5. Search by recuriveSearch."<<endl;
      cout<<"6.Height Of th BST TREE."<<endl;
      cout<<"0. exit program."<<endl;
      cout<<""<<endl;
      cout<<""<<endl;
      cout<<""<<endl;
      cout<<""<<endl;
      
      cin>>option;
      //Node n1;
      //Node n1 =new Node();//not use this simpple method beacuse this cretes the memory in stack memory of the ram
      TreeNode *newnode=new TreeNode();//It means in heap memory obj of tree node is created &
      //in stack memory pointer of treenode is created and this new node is pointing to the object in heap memory
      
      switch(option)
      {
          case 0:
            break; 
         case 1:
         cout<<"INSERT"<<"\n";
         cout<<"Enter The value to be inserted in BST"<<endl;
         cin>>val;
         newnode->value=val;
         bst.InsertNode(newnode);
         break;
         
         case 2:
         cout<<"SEARCHING"<<"\n";
         cout<<"Enter the Value of tree Node to search in BST. "<<endl;
         cin>>val;
         newnode->value=val;
         newnode=bst.iterativesearch(val);
         
         if(newnode!=NULL)
         {
             cout<<"VALUE FOUND IN BST"<<endl;
         }
         else
         {
             cout<<"VALUE NOT FOUND"<<endl;
         }
         break;
         
         case 3:
         cout<<"DELETING"<<"\n";
         
         break;
         
         case 4:
         cout<<"DISPLAY TREE and TRAVERSE"<<endl;
         bst.print2D(bst.root,5);
         cout<<"\n PREORDER TRAVERSAL OF THE TREE"<<"\n\n"; 
         bst.printpreorder(bst.root);
         cout<<"\n INORDER TRAVERSAL OF THE TREE"<<"\n"; 
         bst.printInorder(bst.root);
         cout<<"\n POSTORDER TRAVERSAL OF THE TREE"<<"\n"; 
         bst.printPostorder(bst.root);
         break;
         
         
         case 5:
         cout<<" RECURSIVELY SEARCH"<<"\n";
         cout<<"Enter the Value of tree Node to search in BST. "<<endl;
         cin>>val;
         newnode->value=val;
         newnode=bst.recuriveSearch(bst.root,val);
         
         if(newnode!=NULL)
         {
             cout<<"VALUE FOUND IN BST"<<endl;
         }
         else
         {
             cout<<"VALUE NOT FOUND"<<endl;
         }
         break;
         
         
         case 6:
         cout<<"HEIGHT OF THE TREE."<<endl;
         cout<<"HEIGHT:------>"<<bst.height(bst.root)<<endl;
         break;
         default:
         cout<<"Enter the proper No To get Some Results!!!"<<endl;
        
      }
    }
    
    while(option!=0);
    return 0;
}
