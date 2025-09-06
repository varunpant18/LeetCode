/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) {
            return NULL;
        }

        unordered_map<Node*, Node*> m;

        Node* oldTemp = head;
        Node* newHead = NULL;
        Node* newTemp = NULL;

        while (oldTemp != NULL) {
            Node* copyNode = new Node(oldTemp->val);
            m[oldTemp] = copyNode;

            if (newHead == NULL) {
                newHead = copyNode;
                newTemp = copyNode;
            } else {
                newTemp->next = copyNode;
                newTemp = newTemp->next;
            }

            oldTemp = oldTemp->next;
        }

        oldTemp = head;
        newTemp = newHead;
        while (oldTemp != NULL) {
            newTemp->random = m[oldTemp->random];
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        return newHead;
    }
};