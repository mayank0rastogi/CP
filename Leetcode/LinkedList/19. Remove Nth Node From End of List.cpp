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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * start=new ListNode();
        //now assign its next to head of the linked list
        start->next=head;
        ListNode *fast=start;
        ListNode *slow=start;
        
        for(int i=1;i<=n;i++)
        {
            fast=fast->next;
        }
        while(fast->next!=NULL)//both fast and slow pointer step together to 1 step further                                   //till fast is reached to its end.
        {
            fast=fast->next;
            slow=slow->next;
        }
        
        slow->next=slow->next->next;//unlinking the 2nd node to the third node that currently                                     //slow is pointing 
        
        return start->next;
    }
};
