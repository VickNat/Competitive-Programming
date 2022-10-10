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
//Removing duplicates from a sorted linked list
//create a pointer temp that points to the next node of the head
//open a while loop
//while(tmp!=NULL)
//if(tmp==tmp->next)
//then remove both numbers
//for(int i=tmp; i<=tmp->next; i++)
//if(tmp->next!=null)
//tmp->next=tmp->next->next
//close if
//else if(tmp!=tmp->next)
//continue
//tmp=tmp->next
//close loop
//return tmp
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *test= new ListNode(0, head);
        ListNode *prevPtr = test;

        while(head!=NULL)
        {
            if(head->next!=NULL && head->val == head->next->val)
            {
                while(head->next!=NULL && head->val==head->next->val)
                {
                    head=head->next;
                }
                prevPtr->next=head->next;//to point the next pointer of the test to the newly formed pointer of the head
            }else
            {
                prevPtr=prevPtr->next;
                //else proceed with the normal next pointer
            }
                head=head->next;
                //to head++ the loop
        }
        return test->next;
    }
};
