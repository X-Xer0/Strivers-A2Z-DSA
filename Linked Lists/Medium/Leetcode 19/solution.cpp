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
        ListNode *p1 = head, *p2 = head;

        for(int i = 0; i<n; ++i) p1 = p1->next;

        if(p1 == nullptr){
            p2 = head->next;
            delete(head);
            return p2;
        }

        while(p1->next != nullptr){
            p1 = p1->next;
            p2 = p2->next;
        }

        ListNode* delNode = p2->next;
        p2->next = delNode->next;
        delete(delNode);

        return head;  
    }
};
