/*
Maximum path sum from leaf to leaf

If a binary tree is given, how to find Maximum path sum between two leaves of binary tree.

All should be numbers
The maximum sum path may or may not go through root.
For example, in the following binary tree, the maximum sum is 27(3 + 6 + 9 + 0 – 1 + 10). Expected time complexity is O(n).

  -15
 /  \
       5    6
      / \  / \
    -8  1  3  9
    / \       \ 
   2   6       0
       / \
      4  -1
  /
        10
        
        
*/

#include <bits/stdc++.h>
using namespace std;


struct Node 
{
	int data;
	Node* left, *right;
};


int solve(Node* root, int &res)
{
	if (root == NULL)
	{
		return 0;
	}

	int left_height = solve(root->left, res);

	int right_height = solve(root->right, res);

	
    int temp = max(left_height, right_height) + root->data;
    
    //considering leaf nodes
    // if(root->left==NULL && root->right==NULL)
    // {
    //     temp=max(temp,root->data);
    // }
	int ans = max(temp, left_height + right_height+root->data);
	res=max(res,ans);

	return temp;
}


int maxpathsum(Node* root)
{
    
	if (root == NULL)
		return 0;
	int res = INT_MIN; // This will store the final answer
	solve(root, res);
	return res;
}

struct Node* newNode(int data)
{
	struct Node* node = new Node;
	node->data = data;
	node->left = node->right = NULL;

	return (node);
}

// Driver code
int main()
{
	 struct Node *root = newNode(-15);
    root->left = newNode(5);
    root->right = newNode(6);
    root->left->left = newNode(-8);
    root->left->right = newNode(1);
    root->left->left->left = newNode(2);
    root->left->left->right = newNode(6);
    root->right->left = newNode(3);
    root->right->right = newNode(9);
    root->right->right->right= newNode(0);
    root->right->right->right->left= newNode(4);
    root->right->right->right->right= newNode(-1);
    root->right->right->right->right->left= newNode(10);

	cout<<maxpathsum(root);

	return 0;
}
