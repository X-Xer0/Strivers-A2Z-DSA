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
    bool isPalindrome(ListNode* head) {
        //Edge Case
        if(!head || !head->next) return true;

        //Mid
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != nullptr && fast->next->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        //Reverse Second Half
        ListNode* prev = nullptr;
        ListNode* curr = slow->next;
        while(curr != nullptr){
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }

        //Compare Halves
        ListNode* newHead = prev;
        ListNode* temp = head;        
        while(newHead != nullptr){
            if(temp->val != newHead->val) return false;
            temp = temp->next;
            newHead = newHead->next;
        }
        return true;
    }
};
