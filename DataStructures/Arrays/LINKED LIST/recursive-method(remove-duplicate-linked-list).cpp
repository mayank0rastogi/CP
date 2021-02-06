/* C++ Program to remove duplicates from a sorted linked list */
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node
{
	public:
	int data;
	Node* next;
};

void remove_repeated(Node* head)
{
    Node* curr=head;
    Node* to_free=NULL;

    while(curr->next!=NULL)
    {

        if(curr->data==curr->next->data)
        {

            to_free=curr->next;///contains the element if matched
            curr->next=curr->next->next;
            free(to_free);
            remove_repeated(curr);
        }
        else{
            remove_repeated(curr->next);
        }
    }


}
void push(Node** head, int new_data)
{
	Node* n = new Node();
	n->data = new_data;
    n->next = *head;
    *head = n;
}


void printList(Node *node)
{
	while (node!=NULL)
	{
		cout<<node->data<<" ->";
		node = node->next;
	}
}


int main()
{
	Node* head = NULL;

	push(&head, 20);
	push(&head, 13);
	push(&head, 13);
	push(&head, 11);
	push(&head, 11);
	push(&head, 11);

	cout<<"Linked list before removing repeated removal ";
	printList(head);

	/* Remove duplicates from linked list */
	remove_repeated(head);

	cout<<"\n linked list without having duplicates values ";
	printList(head);

	return 0;
}

