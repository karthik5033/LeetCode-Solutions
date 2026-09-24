# [Topic/Pattern]: Kth Smallest Element in a BST (LeetCode 230)

## Code

```cpp
class Solution {
    int count = 0;
    int ans = 0;
    void inorder(TreeNode* root, int k) {
        if (!root) return;
        inorder(root->left, k);
        count++;
        if (count == k) {
            ans = root->val;
            return;
        }
        inorder(root->right, k);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return ans;
    }
};
```
