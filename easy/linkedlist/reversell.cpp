/*
Key concept: keep track of the nextnode pointer so you don't lose the access to the rest of the list
*/

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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return nullptr;
        ListNode* prev = head;
        ListNode* curr = head->next;
        prev->next = nullptr;

        while (curr != nullptr)
        {
            ListNode* nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }
        return prev;
    }
};
