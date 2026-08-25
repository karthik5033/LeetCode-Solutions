# [Topic/Pattern]: Swap Nodes in Pairs (LeetCode 24)

## Code

```cpp
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* curr = &dummy;
        while (curr->next && curr->next->next) {
            ListNode* first = curr->next;
            ListNode* second = curr->next->next;
            first->next = second->next;
            second->next = first;
            curr->next = second;
            curr = first;
        }
        return dummy.next;
    }
};
```
