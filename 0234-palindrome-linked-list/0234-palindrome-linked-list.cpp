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
    ListNode* reverse(ListNode* head){
        ListNode* front = nullptr;
        ListNode* temp = head;
        ListNode* prev = nullptr;

        while(temp){
            front = temp->next;
            temp->next = prev;

            prev = temp;
            temp = front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* mid = nullptr;
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        mid = slow;
        ListNode* m = reverse(mid->next);
        ListNode* c = m;
        ListNode* p = head;
        bool ans = true;
        while(c){
        if(c->val != p->val){
            ans = false;
            break;
        }
        p = p->next;
        c = c->next;
        }
        return ans;
    }
};