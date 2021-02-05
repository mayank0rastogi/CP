
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    char data;
    Node* next;
    Node(char data)
    {

        this->data=data;
        next=NULL;
    }
};
class palin
{
public:
    Node* head=NULL;
    palin()
    {

        head=NULL;
    }
    bool ispalindrome()
    {

     Node* first=head;
     Node* second=head;
    Node* second_half;
    Node* prev_of_first_ptr=head;
    Node* midnode=NULL;

    ///initialize the result res to boolean
    bool res=true;
    if(head!=NULL && head->next!=NULL)
    {

        ///get the middle of the list by moving first_ptr by 1 and
        ///second ptr by 2 we will have our middle element
      while(second!=NULL && second->next!=NULL)
      {

          second=second->next->next;
          ///prev_of_first element for odd no of nodes
          prev_of_first_ptr=first;
          first=first->next;
      }

      /* fast_ptr would become NULL when there are even elements in list.
        And not NULL for odd elements. We need to skip the middle node
        for odd case and store it somewhere so that we can restore the
        original list*/

        if(second!=NULL)
        {

            midnode=first;
            first=first->next;
        }


        ///now reverse the second half and compare it with first half
        second_half=first;
        prev_of_first_ptr->next=NULL;///NULL terminates first half
        reverse_list(&second_half);///reverse second half
        res=compare_list(head,second_half);

        ///construct original linked list back
        reverse_list(&second_half);

        /// If there was a mid node (odd size case) which
        /// was not part of either first half or second half.


        if(midnode!=NULL)
        {

            prev_of_first_ptr->next=midnode;
            midnode->next=second_half;

        }

        else{
            prev_of_first_ptr->next=second_half;

        }

    }
    return res;
    }
void reverse_list(Node** head)
{

    Node* prev=NULL;
    Node* curr=*head;
    Node* next;///NULL initialize or not is choice
    while(curr!=NULL)
    {

        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    *head=prev;
}
bool compare_list(Node* head1,Node* head2)
{

    Node* temp1=head1;
    Node* temp2=head2;
    while(temp1&& temp2)
    {
        if(temp1->data==temp2->data)
        {

            temp1=temp1->next;
            temp2=temp2->next;
        }

        else{
            return 0;
        }


    }

    ///if both are empty return 1
    if(temp1==NULL && temp2==NULL)
    {

        return 1;
    }

    ///will be here if one is null and other is not
    return 0;
}

void push(char data)
{

    Node* n=new Node(data);
    n->next=head;
    head=n;

}
void printList()
{
    Node* temp=head;
    while (temp != NULL) {
        cout<<temp->data<<"-> ";
        temp = temp->next;
    }
    printf("NULL\n");
}


};
int main()
{

    palin pal;
    char str[]="abacaba";
    for(int i=0;str[i]!='\0';i++)
    {

        pal.push(str[i]);
        pal.printList();
        pal.ispalindrome()?cout<<"Is Palindrome\n\n" :cout<<"Not Palindrome\n\n";
    }
return 0;
}

