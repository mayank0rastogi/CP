/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
     
        ListNode *newnode=NULL;//dummy node
        while(head!=NULL)
        {
            ListNode *next=head->next;
             head->next= newnode;//break the link from head->next from 1->2 //now my first node is pointing to dummy node i.e NULL
            newnode=head;//now our newnode pointing to firt node as its head 
            head=next;//poin to next node shifted to  next node
        }
        return newnode;
    }
};
