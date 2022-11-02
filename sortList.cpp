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
    ListNode* sortList(ListNode* head) {
        if(head==NULL)return head;
        
        ListNode* l=head;
        vector<int>v;
        while(l!=NULL)
        {
            v.push_back(l->val);
            l=l->next;
        }
        sort(v.begin(),v.end());
        
        head = new ListNode(v[0]);
        l = head;
        for (int i = 1; i < v.size(); i++)
        {
            ListNode *x = new ListNode(v[i]);
            l->next = x;
            l = l->next;
        }
        return head;
    }
};
