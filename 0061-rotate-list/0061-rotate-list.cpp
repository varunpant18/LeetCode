class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        // If list is empty, has one node, or no rotation needed
        if (!head || !head->next || k == 0) return head;

        int len = 1; // To calculate length of the list
        struct ListNode* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
            len++;
        }

        // Normalize k if it's greater than the length
        k = k % len;

        // Rotate the list k times, one node at a time
        while (k != 0) {
            struct ListNode* p = head;
            struct ListNode* q = head->next;

            // Move p and q to second last and last node respectively
            while (q->next != NULL) {
                p = p->next;
                q = q->next;
            }

            // Perform one rotation: move last node to front
            q->next = head;  // Point last node to current head
            p->next = NULL;  // Cut off the old tail
            head = q;        // Update head to new front
            k--;
        }

        return head; // Return the rotated list
    }
};