# [Topic/Pattern]: Count Good Nodes in Binary Tree (LeetCode 1448)

## Code

```cpp
class Solution {
    int count = 0;
    void dfs(TreeNode* node, int maxVal) {
        if (!node) return;
        if (node->val >= maxVal) {
            count++;
            maxVal = node->val;
        }
        dfs(node->left, maxVal);
        dfs(node->right, maxVal);
    }
public:
    int goodNodes(TreeNode* root) {
        if (!root) return 0;
        dfs(root, root->val);
        return count;
    }
};
```
