# [Topic/Pattern]: Insert Delete GetRandom O(1) (LeetCode 380)

## Code

```cpp
class RandomizedSet {
    vector<int> nums;
    unordered_map<int, int> valToIndex;
public:
    RandomizedSet() {}
    
    bool insert(int val) {
        if (valToIndex.count(val)) return false;
        valToIndex[val] = nums.size();
        nums.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if (!valToIndex.count(val)) return false;
        int last = nums.back();
        int idx = valToIndex[val];
        nums[idx] = last;
        valToIndex[last] = idx;
        nums.pop_back();
        valToIndex.erase(val);
        return true;
    }
    
    int getRandom() {
        return nums[rand() % nums.size()];
    }
};
```
