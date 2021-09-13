// Given a Binary Tree. Check whether all of its nodes have the value equal to the sum of their child nodes.


// Example 1:

// Input:
//      10
//     /
//   10 
// Output: 1
// Explanation: Here, every node is sum of
// its left and right child.
// Example 2:

// Input:
//        1
//      /   \
//     4     3
//    /  \
//   5    N
// Output: 0
// Explanation: Here, 1 is the root node
// and 4, 3 are its child nodes. 4 + 3 =
// 7 which is not equal to the value of
// root node. Hence, this tree does not
// satisfy the given conditions.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function isSumProperty() that takes the root Node of the Binary Tree as input and returns 1 if all the nodes in the tree satisfy the following properties. Else, it returns 0.
// For every node, data value must be equal to the sum of data values in left and right children. Consider data value as 0 for NULL child.  Also, leaves are considered to follow the property.


// Expected Time Complexiy: O(N).
// Expected Auxiliary Space: O(Height of the Tree).

 

// Constraints:
// 1 <= N <= 105
// 1 <= Data on nodes <= 105


// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
/*Complete the function below

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *node)
    {
        int left_data=0,right_data=0;
    
        //If node is NULL or it's a leaf node then return true
        if(node==NULL || node->left==NULL && node->right==NULL)
        {
            return 1;
        }
       else
    {
        //If left child is not present then 0 is used as data of left child 
        if(node->left != NULL)
        left_data = node->left->data;
     
        //If right child is not present then 0 is used as data of right child 
        if(node->right != NULL)
        right_data = node->right->data;
     
        //if the node and both of its children satisfy the property return 1 else 0*/
        if((node->data == left_data + right_data) && isSumProperty(node->left) && isSumProperty(node->right))
        return 1;
        else
        return 0;
    }
        
    
     // Add your code here
    }
};

// { Driver Code Starts.

/* Driver program to test size function*/

  

int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.isSumProperty(root) << endl;
    }
    return 0;
}
  // } Driver Code Ends
