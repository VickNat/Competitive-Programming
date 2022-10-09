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

 int getCount(ListNode* head)
 {
    int count=0;
    ListNode* tmp=head;

    while(tmp!=NULL)
    {
        tmp=tmp->next;
        count++;
    }
    return count;
 }
class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        int count = getCount(head);
        ListNode* tmpNode;
        tmpNode = head;
        int t=(count/2);
        
        while(t--)
        {
            tmpNode=tmpNode->next;
        }
        return tmpNode;
    }
};
