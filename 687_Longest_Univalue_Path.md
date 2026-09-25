# [Topic/Pattern]: Longest Univalue Path (LeetCode 687)

## Code

```cpp
class Solution {
    int maxLength = 0;
public:
    int dfs(TreeNode* root) {
        if (!root) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        
        int leftPath = 0, rightPath = 0;
        if (root->left && root->left->val == root->val) {
            leftPath = left + 1;
        }
        if (root->right && root->right->val == root->val) {
            rightPath = right + 1;
        }
        
        maxLength = max(maxLength, leftPath + rightPath);
        return max(leftPath, rightPath);
    }
    
    int longestUnivaluePath(TreeNode* root) {
        dfs(root);
        return maxLength;
    }
};
```
