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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* leftpre = dummy;
        ListNode* currnode = head;

        for(int i = 0; i < left - 1; i++)
        {
            leftpre = leftpre->next;
            currnode = currnode->next;
        }

        ListNode* subListhead = currnode;
        ListNode* preNode = NULL;
        for(int i = 0; i < right - left + 1; i++)
        {
            ListNode* nextnode = currnode->next;
            currnode->next = preNode;
            preNode = currnode;
            currnode = nextnode;
        }

        leftpre->next = preNode;
        subListhead->next = currnode;

        return dummy->next;
    }
};