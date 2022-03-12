#include <bits/stdc++.h>
using namespace std;


struct Node 
{
	int data;
	Node* left, *right;
};


int height(Node* root, int& ans)
{
	if (root == NULL)
		return 0;

	int left_height = height(root->left, ans);

	int right_height = height(root->right, ans);

	// update the answer, because diameter of a
	// tree is nothing but maximum value of (left_height + right_height + 1) for each node
  int temp =1 + max(left_height, right_height);
	ans = max(ans, 1 + left_height + right_height);

	return temp;
}


int diameter(Node* root)
{
	if (root == NULL)
		return 0;
	int ans = INT_MIN; // This will store the final answer
	height(root, ans);
	return ans;
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
	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	cout<<diameter(root);

	return 0;
}
