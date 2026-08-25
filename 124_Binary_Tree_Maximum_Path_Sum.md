# [Topic/Pattern]: Binary Tree Maximum Path Sum (LeetCode 124)

## Code

```cpp
class Solution {
    int max_sum = INT_MIN;
public:
    int maxPathSum(TreeNode* root) {
        maxGain(root);
        return max_sum;
    }
    int maxGain(TreeNode* node) {
        if (!node) return 0;
        int leftGain = max(maxGain(node->left), 0);
        int rightGain = max(maxGain(node->right), 0);
        max_sum = max(max_sum, node->val + leftGain + rightGain);
        return node->val + max(leftGain, rightGain);
    }
};
```
