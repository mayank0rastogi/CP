// Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

// You should preserve the original relative order of the nodes in each of the two partitions.

 

// Example 1:


// Input: head = [1,4,3,2,5,2], x = 3
// Output: [1,2,2,4,3,5]
// Example 2:

// Input: head = [2,1], x = 2
// Output: [1,2]


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
    ListNode* partition(ListNode* head, int x) {
      
        ListNode* List1=new ListNode(0);
         ListNode* List2=new ListNode(0);
        
        //now initialize the new head value to our list
        
        ListNode* newless=List1;
        ListNode* newhigh=List2;
        
        while(head!=NULL)
        {
            if(head->val<x)
            {
                //lesser than x list
                newless->next=head;
                newless=newless->next;
            }
            else
            {
                //greater or equal to x elment list
                newhigh->next=head;
                newhigh=newhigh->next;
            }
            head=head->next;
            
        }
        newhigh->next=NULL;//or write it NULL because head at last pointing to NULL
        newless->next=List2->next;
        
        return List1->next;
    }
};
