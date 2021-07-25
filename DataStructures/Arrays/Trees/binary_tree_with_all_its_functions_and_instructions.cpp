/******************************************************************************

bninary search tree as dynamic nodes in memory 

*******************************************************************************/
#include <bits/stdc++.h>
#define SPACE 10
using namespace std;
class treenode
{
    public:
    int value;
    treenode* left;
    treenode* right;
    
    treenode()
    {
        value=0;
        left=NULL;
        right=NULL;
    }
    treenode(int v)
    {
         value=v;
         left=NULL;
         right=NULL;
    }
};

class BiSeTr
{
    public:
    treenode* root;///pointer to treenode type class
    ///this pointer is basically points to object of  treenode
    BiSeTr()
    {
        root=NULL;
    }
    
    bool isTreeEmpty()
    {
        if(root==NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void insertNewNode(treenode* n)
    {
        if(root==NULL)
        {
            root=n;
            cout<<"Value Inserted "<<endl;
        }
        else
        {
            treenode* temp=root;
            while(temp!=NULL)
            {
                if(n->value==temp->value)
                {
                    cout<<"value already exits ";
                    cout<<"try with another value"<<endl;
                    return;
                }
                else if((n->value<temp->value)&&(temp->left==NULL))
                {
                    temp->left=n;
                    cout<<"value Inserted at the left"<<endl;
                    break;
                }
                
                else if(n->value<temp->value)
                {
                    temp=temp->left;
                }
                 else if((n->value>temp->value)&&(temp->right==NULL))
                {
                    temp->right=n;
                    cout<<"value inserted at the right"<<endl;
                    break;
                }
                else
                {
                    temp=temp->right;
                    
                }
                
                
            }
            
        }
    }
    
    void PRE_ORDER(treenode* n)
    {

        if(n==NULL)
        {
            return;
        }
    //first print data of node
             cout<<n->value<<" ";//n refers to node
        //then recur on left subtree
            PRE_ORDER(n->left);
            //after that recur on right subtree
            PRE_ORDER(n->right);
       
        
    }
    void In_ORDER(treenode* n)
    {

        if(n==NULL)
        {
            return;
        }
                //then recur on left subtree
                In_ORDER(n->left);
               // print data of node
             cout<<n->value<<" ";//n refers to node
        
            
            //after that recur on right subtree
            In_ORDER(n->right);
       
        
    }
    void Postorder(treenode* n)
    {

        if(n==NULL)
        {
            return;
        }
                //then recur on left subtree
                Postorder(n->left);
                    //after that recur on right subtree
               Postorder(n->right);
               // print data of node
              cout<<n->value<<" ";//n refers to node
        
            
        
       
        
    }
    
    treenode* iterativetraversing(int val)
    {
        if(root==NULL)
        {
            return root;
        }
        
        else
        {
            treenode* temp=root;
            while(temp!=NULL)
            {
                 if(val==temp->value)
                 {
                     //cout<<"value you have searched founded successfully"<<endl;
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
    
    
    int height(treenode* n)
    {
        
        if(n==NULL)
        {
            return -1;
        }
        else
        {
            int lheight=height(n->right);
            int rheight=height(n->left);
            
            if(lheight>rheight)
            {
                return lheight+1;
            }
            else
            {
                return rheight+1;
            }
        }
    }
    void printLevelOrderBFS(treenode* n)
    {
        int h=height(n);
        for(int i=0;i<=h;i++)
        {
            printgivenlevel(n,i);
        }
    }
    
    void printgivenlevel(treenode* n,int level)
    {
        if(n==NULL)
        {
            return;
        }
        
        else if(level==0)
        {
            cout<<n->value<<" ";
        }
        else
        {
            printgivenlevel(n->left,level-1);
            printgivenlevel(n->right,level-1);
        }
    }
    
    
    void print2D(treenode * root, int space)
    {
    if (root == NULL) // Base case  1
    {
      return;
    }
    space += SPACE; // Increase distance between levels   2
    print2D(root -> right, space); // Process right child first 3 
    cout << endl;
    for (int i = SPACE; i < space; i++) // 5 
      cout << " "; // 5.1  
    cout << root -> value << "\n"; // 6
    print2D(root -> left, space); // Process left child  7
  }
  
};

int main()
{
   BiSeTr obj;
  int option, val;
 
  do {
    cout << "What operation do you want to perform? " <<
      " Select Option number. Enter 0 to exit." << endl;
    cout << "1. Insert Node" << endl;
    cout << "2. Search Node" << endl;
    cout << "3. Delete Node" << endl;
    cout << "4. Print/Traversal BST values" << endl;
    cout << "5. Height of Tree" << endl;
    
 
    cin >> option;
    //Node n1;
    treenode * n = new treenode();//in heap memory object of TreeNode is created and 
    //in stack pointer of new_node is created and this n is pointing to heap memory
 
    switch (option) {
    case 0:
      break;
    case 1:
      	cout <<"INSERT"<<endl;
        cout <<"Enter VALUE of TREE NODE to INSERT in BST: ";
        cin >> val;
        n->value = val;
        obj.insertNewNode(n);
       //obj.insertNode(new_node);
       cout<<endl;
    	break;
     
    case 2:
      cout << "SEARCH" << endl;
      cout << "Enter VALUE of TREE NODE to SEARCH in BST: ";
      cin >> val;
      n = obj.iterativetraversing(val);
      
     // n = obj.recursiveSearch(obj.root, val);
      if (n != NULL) {
        cout << "Value found" << endl;
      } else {
        cout << "Value NOT found" << endl;
      }
      break;
       /*
    case 3:
      cout << "DELETE" << endl;
      cout << "Enter VALUE of TREE NODE to DELETE in BST: ";
      cin >> val;
      n = obj.iterativeSearch(val);
      if (n != NULL) {
        obj.deleteNode(obj.root, val);
        cout << "Value Deleted" << endl;
      } else {
        cout << "Value NOT found" << endl;
      }
      break;*/
    case 4:
      cout << "PRINT 2D: " << endl;
      obj.print2D(obj.root, 5);
      cout << endl;
      cout << "Print Level Order BFS: \n";
      obj.printLevelOrderBFS(obj.root);
      cout << endl;
      	      cout <<"PRE-ORDER: ";
     	      obj.PRE_ORDER(obj.root);
      	      cout<<endl;
      	      cout <<"IN-ORDER: ";
      	      obj.In_ORDER(obj.root);
     	      cout<<endl;
      	      cout <<"POST-ORDER: ";
      	      obj.Postorder(obj.root);
      	      cout<<endl;
      break;
      
    case 5:
      cout << "TREE HEIGHT" << endl;
      cout << "Height : " << obj.height(obj.root) << endl;
      break;
      
    default:
      cout << "Enter Proper Option number " << endl;
    }
 
  } while (option != 0);
 
  return 0;
}