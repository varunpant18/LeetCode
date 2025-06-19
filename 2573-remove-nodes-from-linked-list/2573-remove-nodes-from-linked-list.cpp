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
    ListNode* removeNodes(ListNode* head) {
    std::stack<ListNode*> st;
    ListNode* curr = head;

    while (curr) {
        while (!st.empty() && st.top()->val < curr->val) {
            st.pop();
        }
        st.push(curr);
        curr = curr->next;
    }

    ListNode* newHead = nullptr;
    while (!st.empty()) {
        st.top()->next = newHead;
        newHead = st.top();
        st.pop();
    }

    return newHead;
}
};