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
    ListNode* removeNthFromEnd(ListNode* head, int N) {
        if (head == nullptr) 
        return nullptr;

    ListNode* fast = head;
    ListNode* slow = head;
    int cnt = 0;
     
    while(fast != nullptr && fast->next != nullptr){
        fast = fast->next;
        cnt++;
        if(cnt == N){
            break;
        }
    }
     
    if(cnt < N){
        ListNode* del1 = head;
        head = head->next;
        delete del1;
        return head;
    }
     
    while(fast->next != nullptr){
        fast = fast->next;
        slow = slow->next;
    }
     
    ListNode* del = slow->next;
    if (del != nullptr) {
        slow->next = slow->next->next;
        delete del;
    }

    return head;
    }
};