# [Topic/Pattern]: Create Maximum Number (LeetCode 321)

## Code

```cpp
class Solution {
public:
    vector<int> maxArray(vector<int>& nums, int k) {
        vector<int> res;
        int to_drop = nums.size() - k;
        for (int num : nums) {
            while (!res.empty() && res.back() < num && to_drop > 0) {
                res.pop_back();
                to_drop--;
            }
            res.push_back(num);
        }
        res.resize(k);
        return res;
    }

    bool greater(vector<int>& nums1, int i, vector<int>& nums2, int j) {
        while (i < nums1.size() && j < nums2.size() && nums1[i] == nums2[j]) {
            i++;
            j++;
        }
        return j == nums2.size() || (i < nums1.size() && nums1[i] > nums2[j]);
    }

    vector<int> merge(vector<int> nums1, vector<int> nums2) {
        vector<int> res;
        int i = 0, j = 0;
        while (i < nums1.size() || j < nums2.size()) {
            if (greater(nums1, i, nums2, j)) {
                res.push_back(nums1[i++]);
            } else {
                res.push_back(nums2[j++]);
            }
        }
        return res;
    }

    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
        int m = nums1.size(), n = nums2.size();
        vector<int> best;
        for (int i = max(0, k - n); i <= min(k, m); ++i) {
            vector<int> cand = merge(maxArray(nums1, i), maxArray(nums2, k - i));
            if (best.empty() || greater(cand, 0, best, 0)) {
                best = cand;
            }
        }
        return best;
    }
};
```
