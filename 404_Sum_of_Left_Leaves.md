# [Topic/Pattern]: Sum of Left Leaves (LeetCode 404)

## Code

```cpp
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root, bool isLeft = false) {
        if (!root) return 0;
        if (!root->left && !root->right) return isLeft ? root->val : 0;
        return sumOfLeftLeaves(root->left, true) + sumOfLeftLeaves(root->right, false);
    }
};
```
