
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};

void swap_pairwise(Node* head)
{

    Node* temp=head;
    ///traverse further only if there are at least two nodes left
    while(temp!=NULL && temp->next!=NULL)
    {
        ///swap data of node with its next nodes of data
        swap(temp->data,temp->next->data);

        ///move temp by 2 the next pair
        ///1 2 3
        temp=temp->next->next;///so temp is now pointing to 3 rd one


    }
}

void push(Node** head,int new_data)
{
    Node* n=new Node();
    n->data=new_data;
    n->next=*head;
    *head=n;

}
void printlist(Node* head)
{

    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{

    Node* head=NULL;

    /* The constructed linked list is:
    1->2->3->4->5 */
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    cout << "Linked list "
         << "before calling pairWiseSwap()\n";
    printlist(head);

    swap_pairwise(head);

    cout << "\nLinked list "
         << "after calling pairWiseSwap()\n";
    printlist(head);

    return 0;
}
