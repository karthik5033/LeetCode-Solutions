# [Topic/Pattern]: Reorder List (LeetCode 143)

## Code

```cpp
class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *prev = nullptr, *curr = slow->next;
        slow->next = nullptr;
        while (curr) {
            ListNode *nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        ListNode *first = head, *second = prev;
        while (second) {
            ListNode *nxt1 = first->next, *nxt2 = second->next;
            first->next = second;
            second->next = nxt1;
            first = nxt1;
            second = nxt2;
        }
    }
};
```
