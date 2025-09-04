class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* p = head;
        ListNode* q = p->next;
        head = q; 

        ListNode* prev = nullptr;

        while (p && q) {
            p->next = q->next;
            q->next = p;

            if (prev) {
                prev->next = q;
            }

            prev = p;
            p = p->next;
            if (p) q = p->next;
        }

        return head;
    }
};