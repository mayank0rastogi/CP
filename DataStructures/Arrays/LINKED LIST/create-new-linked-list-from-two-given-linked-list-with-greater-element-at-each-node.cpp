#include<bits/stdc++.h>
using namespace std;
struct Node
{

    int data;
    Node* next;
};

void insert(Node** head,int item)
{

Node* ptr;
Node* temp;
temp=new Node;///initialize the new node
temp->data=item;///initialize the new data item
temp->next=NULL;///initialize Null Pointer to the next Node
if(*head==NULL)
{

    *head = temp;
}
else{
    ptr=*head;
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=temp;
}
}
Node* new_linked(Node* head1,Node* head2)
{

    Node* ptr1=head1;
    Node* ptr2=head2;
    Node* head=NULL;
    Node* temp;
    Node* ptr;

    while(ptr1!=NULL)
    {///it means ptr1 containing the  address of first node of 1 linked list
            temp=new Node;
        temp->next=NULL;

        ///compare between two linked list
        if(ptr1->data<ptr2->data)
        {

            temp->data=ptr2->data;
        }
        else
                {

            temp->data=ptr1->data;
        }

        if(head==NULL)
        {

            head=temp;
        }
        else
        {
            ptr = head;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;

            }
            ptr->next=temp;
        }

    ptr1=ptr1->next;
    ptr2=ptr2->next;
    }
    return head;
}
void display(Node*head)
{
    while (head != NULL) {
        cout <<head->data << "->";
        head= head->next;
    }

    cout << endl;
}

// Driver code
int main()
{
    Node *head1 = NULL, *head2 = NULL, *head = NULL;

    // First linked list
    insert(&head1, 5);
    insert(&head1, 2);
    insert(&head1, 3);
    insert(&head1, 8);

    cout << "First List:  ";
    display(head1);

    // Second linked list
    insert(&head2, 1);
    insert(&head2, 7);
    insert(&head2, 4);
    insert(&head2, 5);

    cout << "Second List: ";
    display(head2);

    head = new_linked(head1, head2);
    cout << "New List:    ";
    display(head);
    return 0;
}
