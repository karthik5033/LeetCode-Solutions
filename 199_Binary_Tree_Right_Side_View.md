# [Topic/Pattern]: Binary Tree Right Side View (LeetCode 199)

## Code

```cpp
class Solution {
    void dfs(TreeNode* root, int depth, vector<int>& res) {
        if (!root) return;
        if (depth == res.size()) {
            res.push_back(root->val);
        }
        dfs(root->right, depth + 1, res);
        dfs(root->left, depth + 1, res);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        dfs(root, 0, res);
        return res;
    }
};
```
