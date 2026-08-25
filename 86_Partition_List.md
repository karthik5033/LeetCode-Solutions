# [Topic/Pattern]: Partition List (LeetCode 86)

## Code

```cpp
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode less_head(0), greater_head(0);
        ListNode *less = &less_head, *greater = &greater_head;
        while (head) {
            if (head->val < x) {
                less->next = head;
                less = less->next;
            } else {
                greater->next = head;
                greater = greater->next;
            }
            head = head->next;
        }
        greater->next = nullptr;
        less->next = greater_head.next;
        return less_head.next;
    }
};
```
