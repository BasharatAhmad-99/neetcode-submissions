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
    void reorderList(ListNode* head) {
        if(head->next==nullptr) return;
        stack<ListNode*> s;
        s.push(nullptr);
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=nullptr && fast->next->next!=nullptr &&             
                slow->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* tN = slow;
        while (tN) {
            s.push(tN);
            tN = tN->next;
        }
        tN = head;
        while (s.top() != nullptr) {
            ListNode* curr = s.top();
            s.pop();
            ListNode* temp=tN->next;
            tN->next = curr;
            curr->next=temp;
            tN = tN->next->next;
        }
        tN->next = nullptr;
    }
};
