# [Topic/Pattern]: Diameter of Binary Tree (LeetCode 543)

## Code

```cpp
class Solution {
    int max_diameter = 0;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        maxDepth(root);
        return max_diameter;
    }
    int maxDepth(TreeNode* node) {
        if (!node) return 0;
        int left = maxDepth(node->left);
        int right = maxDepth(node->right);
        max_diameter = max(max_diameter, left + right);
        return max(left, right) + 1;
    }
};
```
