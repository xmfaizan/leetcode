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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k == 0 || !head->next) return head;
        int len = 1;
        ListNode *p = head;
        while (p->next) {
            len++;
            p = p->next;
        }
        if (k % len == 0) return head;
        k = len - (k % len);
        
        p->next = head;
        while (k--) p = p->next;

        ListNode *newHead = p->next;
        p->next = nullptr;

        return newHead;
    }
};
